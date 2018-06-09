//
//  main.c
//  Chapter6_8
//
//  Created by mac on 17/12/29.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*函数返回一个指针变量*/
//常规写法：输出一个较小值
int smaller(int a,int b)
{
    return ((a<b)?a:b);
}
//返回一个指针，使用静态局部变量，延长生命周期，返回生命周期更长的地址
int* smaller1(int a,int b)
{
    static int i = 0;       //声明并给一个静态变量i赋值为0
    static int j = 0;       //声明并给一个静态变量i赋值为0
    i = a;
    j = b;
    int *s = NULL;          //声明一个指针变量s，指向为空地址
    s = ((a<b)?&a:&b);      //将较小值的地址返回给s
    return s;//ok:返回生命周期更长的变量地址即可
}
//返回一个指针，形参为实参复制的数据
int* smaller2(int a,int b)
{
    int *s = NULL;          //声明一个指针变量s，指向为空地址
    s = a<b?&a:&b;          //将较小值的地址返回给s
    return s;//离开作用域a,b的空间被释放，指向的是无效地址
}
//返回指针变量，形参为实参变量的地址
int* smaller3(int* a,int* b)
{
    int *s = NULL;          //声明一个指针变量s，指向为空地址
    s = *a<*b?a:b;          //将较小值的地址返回给s
    return s;
}
int* smaller4(int a,int b)
{
    int* s = (int *)malloc(sizeof(int));
    *s = ((a<b)?a:b);
    return s;
}
//返回一个指针变量
void text01()
{
    int a = 1;
    int b = 2;
    int *c = NULL;          //声明一个指针变量s，指向为空地址
    c = smaller4(a, b);   //调用函数将较小值的地址返回给c
    printf("smaller = %d\n",*c);//打印输出较小值，*c = a = 1
    free(c);
    c = NULL;
}
void text02()
{
    float* pFloat = (float *)malloc (sizeof(float));
    printf("请输入一个小数（堆内存分配）:");
    scanf("%f",pFloat);//3.14
    printf("%.2f\n", *pFloat);
    free(pFloat);
    pFloat = NULL;
}
//测试函数：指针malloc-free内存二次删除
void text03()
{
    int a = 10;
    int * pa = (int *)malloc(4);//手动分配内存空间，pa指向堆内存
    *pa = a;
    printf("a = %d &a = %p\n",a,&a);
    printf("*pa = %d pa = %p\n",*pa,pa);
    free(pa);//手动释放内存
    *pa = 100;//非法访问
    printf("*pa = %d pa = %p\n",*pa,pa);
    free(pa);//二次释放
    pa = NULL;
}
//测试函数：指针malloc-free内存泄露
void text04()
{
    int a = 10;
    int * pa = (int *)malloc(4);//手动分配内存
    *pa = a;
    printf("a = %d &a = %p\n",a,&a);
    printf("*pa = %d pa = %p\n",*pa,pa);
    free(pa);//指向下一个堆内存之前先释放上一个malloc空间
    int * pb = &a;//(int *)malloc(sizeof(int));
    *pb = 200;
    printf("*pb = %d pb = %p\n",*pb,pb);
//    free(pb);
    pa = (int *)malloc(sizeof(int));//重新手动分配内存
    *pa = a;
    printf("*pa = %d pa = %p\n",*pa,pa);
    free(pa);//释放内存
    pa = NULL;

}
int main(int argc, const char * argv[]) {
    text04();
    return 0;
}
