//
//  main.c
//  SocketServer
//
//  Created by mac on 18/4/23.
//  Copyright © 2018年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#define BUF_SIZE 1024
#include <netdb.h>
void test1()
{
    //创建套接字
    //参数 AF_INET 表示使用 IPv4 地址，SOCK_STREAM 表示使用面向连接的数据传输方式，IPPROTO_TCP 表示使用 TCP 协议
    int serv_sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    //将套接字和IP、端口绑定
    struct sockaddr_in serv_addr;
    memset(&serv_addr,0,sizeof(serv_addr));//每个字节都用0填充
    serv_addr.sin_family = AF_INET;//使用IPV4地址
    serv_addr.sin_addr.s_addr = inet_addr("192.168.43.86");//具体IP地址
    serv_addr.sin_port = htons(1234);//端口 将short类型数据从主机字节序转换为网络字节序。
    bind(serv_sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    //进入监听状态，等待用户发起请求
    listen(serv_sock,20);//sock 为需要进入监听状态的套接字，backlog 为请求队列的最大长度。
    //接受客户请求
    while (1) {
        struct sockaddr_in clnt_addr;
        socklen_t clnt_addr_size = sizeof(clnt_addr);
        int clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr,&clnt_addr_size);
        //向客户端发送数据
        char str[] = "Hello World";
        write(clnt_sock,str, sizeof(str));
        close(clnt_sock);
    }
    //关闭套接字
    close(serv_sock);
}
void test2()
{
    //创建套接字：参数：IPV4地址，面向
    int serverSock = socket(AF_INET, SOCK_STREAM,0);
    struct sockaddr_in sockaddr;
    memset(&sockaddr, 0, sizeof(sockaddr));
    sockaddr.sin_family = AF_INET;//IPV4
    sockaddr.sin_addr.s_addr = inet_addr("192.168.43.86");//
    sockaddr.sin_port = htons(1234);
    bind(serverSock,(struct sockaddr*)&sockaddr,sizeof(sockaddr));
    listen(serverSock, 20);
    //接受客户端请求
    struct sockaddr_in clnAddr;
    socklen_t nSize = sizeof(clnAddr);
    int clnSock = accept(serverSock, (struct sockaddr*)&clnAddr,&nSize);
    char buffer[100];
    //接受客户端发来的数据
    ssize_t strlen = read(clnSock, buffer, sizeof(buffer)-1);
    printf("Message from client:%s\n",buffer);
    write(clnSock, buffer, strlen);
    close(serverSock);
    close(clnSock);
}
void UDPtest()
{
    int sock = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in seraddr;
    memset(&seraddr, 0, sizeof(seraddr));
    seraddr.sin_family = AF_INET;
    seraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    seraddr.sin_port = htons(1234);
    bind(sock,(struct sockaddr*)&seraddr,sizeof(seraddr));
    //接受客户端请求
    struct sockaddr_in clnaddr;
    socklen_t nsize = sizeof(clnaddr);
    char buffer[BUF_SIZE];
    /*
     Linux和Windows下的 sendto() 函数类似，下面是详细参数说明：
     sock：用于传输UDP数据的套接字；
     buf：保存待传输数据的缓冲区地址；
     nbytes：带传输数据的长度（以字节计）；
     flags：可选项参数，若没有可传递0；
     to：存有目标地址信息的 sockaddr 结构体变量的地址；
     addrlen：传递给参数 to 的地址值结构体变量的长度。
     */
    /*
     由于UDP数据的发送端不不定，所以 recvfrom() 函数定义为可接收发送端信息的形式，具体参数如下：
     sock：用于接收UDP数据的套接字；
     buf：保存接收数据的缓冲区地址；
     nbytes：可接收的最大字节数（不能超过buf缓冲区的大小）；
     flags：可选项参数，若没有可传递0；
     from：存有发送端地址信息的sockaddr结构体变量的地址；
     addrlen：保存参数 from 的结构体变量长度的变量地址值。
     */
    while (1) {
        ssize_t strlen = recvfrom(sock,buffer,BUF_SIZE,0,(struct sockaddr*)&clnaddr, &nsize);
        printf("Message from client:%s\n",buffer);
        sendto(sock,buffer,strlen,0,(struct sockaddr*)&clnaddr, nsize);
    }
    close(sock);
    
}
void test3()
{
    char* filename = "/Users/mac/Desktop/SocketExercise/my.mp3";
    FILE* fp = fopen(filename,"rb");
    if (fp == NULL) {
        printf("Cannot open file, press any key to exit!\n");
        system("pause");
        exit(0);
    }
    int serverSock = socket(AF_INET,SOCK_STREAM,0);
    struct sockaddr_in sockaddr;
    memset(&sockaddr,0,sizeof(sockaddr));
    sockaddr.sin_family = AF_INET;
    sockaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    sockaddr.sin_port = htons(1234);
    bind(serverSock,(struct sockaddr*)&sockaddr,sizeof(sockaddr));
    listen(serverSock,20);
    int clnaddr;
    socklen_t nsize = sizeof(clnaddr);
    int clnSock = accept(serverSock, (struct sockaddr*)&clnaddr, &nsize);
    //循环发送数据，直到文件结尾
    char buffer[BUF_SIZE];
    size_t nCount;
    //当读取到文件末尾，fread() 会返回 0，结束循环
    int i = 0;
    while ((nCount = fread(buffer, 1, BUF_SIZE, fp)) > 0) {
        write(clnSock, buffer, nCount);
        i++;
    }
    shutdown(clnSock, SHUT_WR); //文件读取完毕，断开输出流，向客户端发送FIN包
    read(clnSock, buffer, BUF_SIZE);//阻塞，等待客户端接收完毕
    fclose(fp);
    close(serverSock);
    close(clnSock);
    printf("********%d\n",i);

}
int main(int argc, const char * argv[]) {
//    test1();
//    test2();
//    UDPtest();
    test3();
    return 0;
}
