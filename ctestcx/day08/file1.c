//
//  file1.c
//  day08
//
//  Created by mac on 17/12/25.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int xx = 10;                        //全局变量，作用域整个工程，别的文件需extern
const float PI = 3.14;
void print(){
    printf("This is file1.c!\n");
}
//1、编写一个C程序，输入a，b，c三个值，输出其中最大者
int max01(int a,int b,int c){
    return a>b?a:(b>c?b:c);
}
//2、求多项式1-1/2+1/3-1/4+1/5+……+1/99-1/100的值。
void dxs(){
    int sign = 1;
    double deno,sum = 1.0,term;
    for (deno = 2.0; deno<=100; ++deno) {
        sign = -sign;
        term = sign/deno;
        sum = sum + term;
    }
    printf("%f\n",sum);
}
//3、有3个数a,b,c，要求按大小顺序把它们输出
void px(){
    int a[10],d;
    printf("请输入10个数：");
    for (int i = 0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i<10; ++i) {
        for (int j = i+1;j<10; ++j) {
            if (a[i]>a[j]) {
                d=a[j];a[j]=a[i];a[i]=d;
            }
        }
    }
    for (int i = 0; i<10; ++i) {
        printf("%d ",a[i]);
    }
    printf("\n");
    for (int i = 0; i<10; ++i) {
        for (int j = i+1;j<10; ++j) {
            if (a[i]<a[j]) {
                d=a[j];a[j]=a[i];a[i]=d;
            }
        }
    }
    for (int i = 0; i<10; ++i) {
        printf("%d ",a[i]);
    }

    printf("\n");
}
//4、判断一个数n能否同时被3和5整除
int zc(int a){
    if (a%3==0&&a%5==0) {
        return 1;
    }
    else
    {
        return 0;
    }
}
void pd(){
    int a;
    scanf("%d",&a);
    printf("%d\n",zc(a));
}
//5、将100到200间的素数输出
void sus(){
    int tag;
    for (int i = 100; i<=200; ++i) {
        tag=1;
        for (int j = 2; j<sqrt(i); ++j) {
            if (i%j==0) {
                tag=0;
                break;
            }
        }
        if (1==tag) {
            printf("%d ",i);
        }
    }
    printf("\n");
}
//6、求两个数m和n的最大公约数????
int ys(int a,int b){
    int c;
    c=a-b;
    c=c-b;
    if (0==c) {
        return a;
    }else
    return c;
}
void yus(){
    int m,n;
    printf("请输入m和n的数据：");
    scanf("%d,%d",&m,&n);
    printf("%d\n",ys(m, n));
}