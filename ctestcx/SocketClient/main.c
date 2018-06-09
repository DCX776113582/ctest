//
//  main.c
//  SocketClient
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
    int sock = socket(AF_INET, SOCK_STREAM,0);
    //向服务器（特定的IP和端口）发起请求
    struct sockaddr_in serv_addr;
    memset(&serv_addr,0, sizeof(serv_addr));//每个字节都用0填充
    serv_addr.sin_family = AF_INET;//使用IPV4地址
    serv_addr.sin_addr.s_addr = inet_addr("192.168.43.86");//具体的IP的地址
    serv_addr.sin_port = htons(1234);
    /*
     htons() 用来将当前主机字节序转换为网络字节序，其中h代表主机（host）字节序，n代表网络（network）字节序，s代表short，htons 是 h、to、n、s 的组合，可以理解为”将short型数据从当前主机字节序转换为网络字节序“。
     常见的网络字节转换函数有：
     htons()：host to network short，将short类型数据从主机字节序转换为网络字节序。
     ntohs()：network to host short，将short类型数据从网络字节序转换为主机字节序。
     htonl()：host to network long，将long类型数据从主机字节序转换为网络字节序。
     ntohl()：network to host long，将long类型数据从网络字节序转换为主机字节序。
     
     通常，以s为后缀的函数中，s代表2个字节short，因此用于端口号转换；以l为后缀的函数中，l代表4个字节的long，因此用于IP地址转换。
     
     */
    connect(sock, (struct sockaddr*)&serv_addr,sizeof(serv_addr));
    //读取服务器返回的数据
    char buffer[40];
    read(sock, buffer, sizeof(buffer)-1);
    printf("Message form server:%s\n",buffer);
    //关闭套接字
    close(sock);
}
void test2()
{
    int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    
    struct sockaddr_in sockaddr;
    memset(&sockaddr, 0, sizeof(sockaddr));
    sockaddr.sin_family = AF_INET;
    sockaddr.sin_addr.s_addr = inet_addr("192.168.43.86");
    sockaddr.sin_port = htons(1234);
    
    if (connect(sock, (struct sockaddr*)&sockaddr, sizeof(sockaddr)) == -1) {
        printf("链接失败\n");
    }
    
    //获取用户输入的字符串并发送给服务器
    char bufSend[40];
    printf("input a string: ");
    scanf("%s",bufSend);
    write(sock, bufSend, strlen(bufSend));
    
    //接受服务器传回的数据
    char bufRecev[100];
    read(sock, bufRecev, sizeof(bufRecev)-1);
    
    printf("message fromServer: %s\n",bufRecev);
    
    close(sock);
}
void test3()
{
    int sock = socket(AF_INET,SOCK_STREAM, 0);
    struct sockaddr_in sockaddr;
    memset(&sockaddr,0, sizeof(sockaddr));
    sockaddr.sin_family = AF_INET;
    sockaddr.sin_addr.s_addr = inet_addr("192.168.43.142");
    sockaddr.sin_port = htons(123);
    connect(sock,(struct sockaddr*)&sockaddr,sizeof(sockaddr));
    //读取服务器返回的数据
    char buffer[40];
    read(sock, buffer, sizeof(buffer)-1);
    printf("Message form server:%s\n",buffer);
    //关闭套接字
    close(sock);
}
void test4()
{
    char * filename = "/Users/mac/Desktop/SocketExercise/joker.mp3";
    FILE* fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Cannot open file, press any key to exit!\n");
        system("pause");
        exit(0);
    }
    int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    struct sockaddr_in sockaddr;
    sockaddr.sin_family = AF_INET;
    sockaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    sockaddr.sin_port = htons(1234);
    if (connect(sock, (struct sockaddr*)&sockaddr, sizeof(sockaddr)) == -1) {
        printf("链接失败！\n");
    }
    //循环接受数据，直到文件传输完毕
    char buffer[BUF_SIZE];
    size_t nCount;
    /*
     就是文件传输完毕后让 recv() 返回 0，结束 while 循环。
     注意：读取完缓冲区中的数据 recv() 并不会返回 0，而是被阻塞，直到缓冲区中再次有数据。
     */
    while ((nCount = read(sock, buffer, BUF_SIZE))>0) {
        fwrite(buffer, nCount, 1, fp);
    }
    printf("File transfer success\n");
    fclose(fp);
    close(sock);
}
void UDPtest()
{
    int sock = socket(AF_INET, SOCK_DGRAM, 0);
    //服务器地址信息
    struct sockaddr_in sockadr;
    sockadr.sin_family = AF_INET;
    sockadr.sin_addr.s_addr = inet_addr("127.0.0.1");
    sockadr.sin_port = htons(1234);
    //不断获取用户输入并发送给服务器，然后接受服务器数据
    struct sockaddr* fromAddr;
    socklen_t addrLen = sizeof(fromAddr);
    while (1) {
        char buffer[BUF_SIZE] = {0};
        printf("input a string:");
        scanf("%s",buffer);
        sendto(sock,buffer,strlen(buffer),0,(struct sockaddr*)&sockadr,sizeof(sockadr));
        ssize_t strlen = recvfrom(sock,buffer,BUF_SIZE, 0,(struct sockaddr*)&fromAddr,&addrLen);
        buffer[strlen] = 0;
        printf("Message from server:%s\n",buffer);
    }
    close(sock);
}
int main(int argc, const char * argv[]) {
//    test1();
//    test2();
//    test3();
//    UDPtest();
    test4();
    return 0;
}
