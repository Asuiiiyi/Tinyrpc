#ifndef __MPRPC_PROVIDER_H__
#define __MPRPC_PROVIDER_H__

#include "MprpcApplication.h"
#include "ZookeeperUtil.h"

#include <google/protobuf/service.h>
#include <muduo/net/TcpServer.h>
#include <muduo/net/TcpConnection.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/InetAddress.h>

#include <memory>

// 请求的具体信息
struct RequestInfo
{
    std::string service_name; // 服务名字
    std::string method_name;  // 方法名
    uint32_t args_size;       // 数据的大小
    std::string args_str;     // 数据串
};

class MprpcProvider
{
public:
    // 框架，需要设计为抽象类
    void NotifyService(google::protobuf::Service *service);

    // 启动rpc服务节点，开始提供rpc远程网络调用服务
    void Run();

private:
    // 新的socket连接回调
    void OnConnection(const muduo::net::TcpConnectionPtr &);

    // 已建立连接用户的读写事件回调
    void OnMessage(const muduo::net::TcpConnectionPtr &, muduo::net::Buffer *, muduo::Timestamp);

    // Closure的回调操作，用于序列化rpc的响应和网络发送
    void SendRpcResponse(const muduo::net::TcpConnectionPtr &, google::protobuf::Message *);

    // 将服务注册到zookeeper上
    void RegisterZookeeper(const muduo::net::InetAddress &address, ZkClient *zkCli);

    // 解析数据包
    void ParseRequest(muduo::net::Buffer *buffer, RequestInfo *req_info);

    // 服务类型信息
    struct ServiceInfo
    {
        // 保存服务对象
        google::protobuf::Service *m_service;
        // 保存服务方法
        std::unordered_map<std::string, const google::protobuf::MethodDescriptor *> m_methodMap;
    };

    std::unordered_map<std::string, ServiceInfo> m_serviceMap; // 存储注册成功的服务对象和服务方法的所有信息
    std::unique_ptr<muduo::net::TcpServer> m_tcpserverPtr;     // 使用智能指针管理
    muduo::net::EventLoop m_eventLoop;
};

#endif // __MPRPC_PROVIDER_H__