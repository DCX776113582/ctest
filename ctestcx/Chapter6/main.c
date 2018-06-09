//
//  main.c
//  Chapter6
//
//  Created by mac on 18/1/2.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chapter6_20180102.h"
#include "chapter6_20180103.h"
#define N 10
void test1()
{
    char a[3]={'a','b','c'};
    int b[3]={1,2,3};
    float c[3]={1.22,21.2,23.1};
    for (int i = 0; i<3; ++i) {
        printf("%p %c\n",a+i,*(a+i));
    }
    for (int i = 0; i<3; ++i) {
        printf("%p %d\n",b+i,*(b+i));
    }
    for (int i = 0; i<3; ++i) {
        printf("%p %.2f\n",c+i,*(c+i));
    }
}
void test2()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    int *p = &x[3];
    printf("%d %d %p %p",*p,x[3],p,&x[3]);
    p+=4;
    printf("%d %d %p %p",*p,x[3],p,&x[3]);
}
//传数组、传指针
int *f(int *x)
{
    x = x+2;
    return x;
}
void *f1(int x[])//增强可读性，int*类型 x是指针变量
{
    x += 1;
    *x = 100;
    return 0;
}
void test3()
{
    int a[] = {1,2,5,4,3};
    int *pa = a;
//    pa = (*f)(pa);
    (*f1)(pa);//传数组：数组变量名称（实质：传指针——数组首元素的地址）
    printf("%d\n",*pa);
    printf("%d %d\n",*pa+1,a[1]);
}
int *array(int array[],int i,int n)
{
    for (int i = 1; i<n; ++i) {
        if (*array<array[i]) {
            *array = array[i];
        }
    }
    return array;
}
void test4()
{
    int s[5];
    for (int i = 0; i<5; ++i) {
        printf("s[%d]:",i);
        scanf("%d",s+i);
    }
    int *max = NULL;
    max = array(s, 0, 5);
    printf("max = %d\n",*max);
    for (int i = 0; i<5; ++i) {
        printf("%d ",s[i]);
    }
    printf("\n");
}
void test5()
{
    int a = 10;
    int const b = 20;
    int c[3] = {1,2,3};//数组名就是指针常量
    int * const p = &a;//只读（指针）变量：指针常量(const修饰p)
    printf("%d\n",*p);
    *p = 1024;
    /*1、p不能指向其他对象；不能作左值
      2、*p不能被修改；*/
    printf("%d %d\n",a,*p);
    int * const o = c;//只读（指针）变量：指针常量
    printf("%d %d %d\n",*o,*(o+1),*(o+2));
    *o = 16;
    *(o+1) = 32;
    *(o+2) = 64;
    printf("%d %d %d\n",*o,*(o+1),*(o+2));
    int const * q = &b;//q指向变量b的指针变量：常量指针（const修饰*q）
    printf("%d\n",*q);
    q = &a;//q的指向可以改变（本质为变量）；*q不能作左值（只读）
    printf("%d\n",*q);
}
void test6()//Demo6_18
{
    int const a = 2;
    int b = 10;
    const int aa = 99;
    int c = 11;
    int *pp = &b;
    printf("%d\n", *pp);
    int * const p = &b;
    //p = pp;
    //p = &c;
    printf("%d\n", *p);
    const int *q = &a;
    q = &c;
    printf( "%d\n", *q );
    //*q = 100;
    q = &aa;
    printf( "%d\n", *q );
    
}
int const fun(int const * const pa, int const * const pb)//只读，指向常量的指针常量；pa、pb的指向不能改变，*pa、*pb不能修改，双重锁定。避免系统自动篡改数据内容。
{
//     pa = pb;//指针的指向不变，无法赋值
//     *pa = 100;//不能修改
//     *pb = 200;//不能修改
    return (*pa+*pb);
}
void test7()
{
    const int a = 10;//只读变量
    const int b = 20;//只读变量
    printf("sum=%d\n",fun(&a, &b));
    printf("after:a=%d b=%d\n",a, b);
}
typedef int (*POINTER)(int,int);
typedef void(*PON)(int,int,char);
typedef int(*APOINT)[5];
int add(int,int);//加法
int sub(int,int);//减法
int Muil(int,int);//乘法
void Div(int,int,char);//除法
void yu(int,int,char);//取余
void test8()
{
    //    test6_12_04();                      //调用函数
    //    Demo06_14();
    //    q1();
    //    test4();//直接调用、使用函数
//    void (*p)() = &test4;//声明函数指针变量；使用函数指针；
//    (*p)();//函数指针间接调用、使用指向的函数模块
    int a = 100,b = 50;
    int c[]={1,2,3,4,5};
    APOINT arry=&c;
    for (int i = 0; i<5; ++i)
    {
        printf("c[%d]=%d\n",i,(*arry)[i]);
    }
    POINTER q = &add;
    printf("add = %d\n",(*q)(a,b));
    POINTER w= &sub;
    printf("sub = %d\n",(*w)(a,b));
}
/*编程题：
 a、设计一个简单计算器，要求如下：
 b、使用函数指针调用相关函数；
 c、要求可以手动输入整形数据；
 d、手动输入运算符：+、-、*、/、%
 e、函数指针类型要求自定义；
 f、参考以下格式结果进行设计并完成。*/
void jisuanqi()
{
    int a,b;
    char c;
    POINTER symbol;
    PON symbol1;
//    POINTER jia = &add;
//    POINTER jian = &sub;
//    POINTER cheng = &Muil;
//    PON chu = &Div;
//    PON qu = &yu;
    printf("请输入两个数据：\n");
    printf("number1:");
    scanf("%d",&a);
    printf("number2:");
    scanf("%d",&b);
    getchar();
    printf("请输入两个数据的运算符(+、-、*、/、%%):");
    scanf("%c",&c);
    switch (c) {
        case '+':
            symbol = &add;
            printf("%d%c%d运算结果为:%d\n",a,c,b,symbol(a,b));break;
        case '-':
            symbol = &sub;
            printf("%d%c%d运算结果为:%d\n",a,c,b,symbol(a,b));break;
        case '*':
            symbol = &Muil;
            printf("%d%c%d运算结果为:%d\n",a,c,b,symbol(a, b));break;
        case '/':
            symbol1 = &Div;
            symbol1(a,b,c);break;
        case '%':
            symbol1 = &yu;
            symbol1(a,b,c);break;
        default:printf("输入有误！\n");break;
    }
    jisuanqi();
}
int main(int argc, const char * argv[]) {
    jisuanqi();
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int Muil(int a,int b)
{
    return a*b;
}
void Div(int a,int b,char c)
{
    if (b!=0) {
        printf("%d%c%d运算结果为:%d\n",a,c,b,a/b);
    }
    else
    {
        printf("分母不能为0\n");
    }
}
void yu(int a,int b,char c)
{
    if (b!=0) {
        printf("%d%c%d运算结果为:%d\n",a,c,b,a%b);
    }
    else
    {
        printf("分母不能为0\n");
    }
}
