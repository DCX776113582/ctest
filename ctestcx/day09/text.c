//
//  text.c
//  day09
//
//  Created by mac on 17/12/27.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include "text.h"
void fun()
{
    int a = 5;
//    fun1(a);
    printf("%d\n",a);
}
int fun1(int x)
{
    x = x+3;
    return x;
    
}
/*
    递归函数
 */
//递归函数：判断素数
int fun_prim(int n,int i)
{
    int p = 1;
    if (i<n) {
        if (n%i==0) {
            p = 0;
            return p;
        }else{
            p=fun_prim(n,i+1);
            return p;
        }
    }
    return p;
}
void xunhuan()
{
    int n;
    printf("请输入一个正整数（n>2）:");
    scanf("%d",&n);
    int r = fun_prim(n,2);
    if (1==r) {
        printf("%d是素数\n",n);
    }
    else
    {
        printf("%d不是素数\n",n);
    }
}
//递归函数：最大值
int Max(int a[],int max,int i)
{
    if (i<5) {
        if (a[i]>max)
        {
            max = a[i];
        }
        max = Max(a, max, i+1);
    }
    return max;
}
void max()
{
    int a[5];
    printf("请输入5个整数：");
    for (int i = 0; i<5; ++i) {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    max = Max(a,max,1);
//    int max = a[0];
//    for (int j = 0; j<4; ++j) {
//        if (a[j]>max) {
//            max = a[j];
//        }
//    }
    printf("max = %d\n",max);
}
/*
 全局变量，
 */
/*一列数的规则如下: 1、1、2、3、5、8、13、21、34...... 求第30位数是多少？（递归函数实现：第n位数是多
 少？）*/
int text(int n)
{
    if (1==n||2==n) {
        return 1;
    }
    return text(n-1)+text(n-2);
}
void text_t()
{
    int n;
    printf("请输入数据：");
    scanf("%d",&n);
    printf("%d\n",text(n));
}
void text1()
{
    int j = 0;

    for (int i = 100; i<=200; ++i) {
        if ((i%3!=0)&&(i%7!=0)) {
            printf("%d ",i);
            ++j;
        }
        if (j%8==0) {
            printf("\n");
        }
    }
    printf("\n");
}
/*
 
                            Chapter6————指针
 内容：指针练习
 */
//测试函数：指针和地址的理解
void text2()
{
    int a = 10;
    printf("%d %p\n",a,&a);
    char aChar = 'G';
    printf("%c %p\n",aChar,&aChar);
    char * p = &aChar;
    printf("%p %p\n",p,&p);
}
void text2_1()
{
    char aChar = 'G';
    printf("%c %p\n",aChar,&aChar);
    char * p = &aChar;
    printf("%p %p\n",p,&p);
    
    int a = 10,b = 20,c = 30;
    int * pa = &a;                  //pa指向a （pa的值是a得地址）
    printf("%d %p %d %p\n",a,&a,*pa,&pa);
    pa = &b;
    printf("%d %p %p %p\n",b,&b,pa,&pa);
    pa = &c;
    printf("%d %p %p %p\n",c,&c,pa,&pa);
    
    float f = 1.3f;
    float * pf = &f;                //pf为float*类型的指针变量（其值为指向变量f的地址）
    printf("%f %p %p\n",f,&f,pf);
    
    double d = 2.2;
    double * pd = &d;               //pd为double*类型的指针变量（其值为指向变量d的地址）
    printf("%lf %p %p\n",d,&d,pd);
    
    {
        char i;
        int a;
        float f;
        double d;
        printf("%ld %ld %ld %ld\n",sizeof(&i),sizeof(&a),sizeof(&f),sizeof(&d));
        printf("%ld %ld %ld %ld\n",sizeof(char*),sizeof(int*),sizeof(float*),sizeof(double*));
        printf("%ld %ld %ld %ld\n",sizeof(p),sizeof(pa),sizeof(pf),sizeof(pd));
    }

}
//测试函数：指针变量的访问--间接访问 *p 解引用
void text3()
{
    int a = 8;
    int * p = &a;
    printf("a = %d\n",a);       //直接访问
    printf("*p = %d\n",*p);     //间接访问
    //写入数据（修改数据）a:*P间接引用a
    *p = 10;
    printf("a = %d\n",a);       //直接访问
    printf("*p = %d\n",*p);     //间接访问
    
    int c = (*p)+64;            //int c = a+64;//间接访问a
    printf("c = %d\n",c);
}
//测试函数：书Demo6_02
void text4()
{
    int x;
    int * p = &x;                               //p指向x的地址，*p指向x的值
    int * q = &x;                               //q指向x的地址，*q指向x的值
    printf("x = %d,x = %d,x = %d\n",x,*p,*q);   //*p=*q=x
    
    x = 4;
    printf("x = %d,x = %d,x = %d\n",x,*p,*q);   //*p=*q=x=4

    *p = 8;                                     //x = 8
    printf("x = %d,x = %d,x = %d\n",x,*p,*q);   //*p=*q=x=8

    *&x = *q + *p;                              //*p=*q=x=x+x=8+8=16
    printf("x = %d,x = %d,x = %d\n",x,*p,*q);   //*p=*q=x=16

    x = *p * *q;                                //x=x*x=16*16=256
    printf("x = %d,x = %d,x = %d\n",x,*p,*q);   //*p=*q=x=256
    int *a = &*q;                       //&*标识符（指针类型）== 标识符
    printf("a = %d\n",*a);
    printf("%p\n",*&q);                 //*&标识符（变量类型）== 标识符
}
/*
 int b;
 int a=b=2;(单独使用错误，b未声明)
 int * pb = &b;
 int * pa = pb =&b;(单独使用错误，pb未声明)
 */
//指针变量的声明以及初始化问题
void text5()
{
    int a;
    int b;
    a=b=2;
    
    int * pa = &a;
    int * pb = &b;     //pa，pb为int*类型
    printf("a = %d,b = %d\n%p %p\n",a,b,pa,pb);
    pa = pb;           //pb的值赋给pa
    printf("a = %d,b = %d\n%p %p\n",a,b,pa,pb);
}
/*
 int *p;
 printf("%p\n",p); //0x0;空地址：无效地址->系统级地址
 */
void text6()
{
    int a;
    int b;
    int c;
    a = 12;
    b = 21;
    c = a*b;
    int *p = &c;
    printf("%p %d\n",&c,c);
    printf("%p %d\n",p,*p);
}
void exchange(int *pa,int *pb)
{//交换形参指针变量的值（指向交换），指向变量的值并没有发生变化
    int* c;
    c = pa;
    pa = pb;
    pb = c;
    printf("形参：%d %d\n",*pa,*pb);
}
void exchange1(int *pa,int *pb)
{//交换形参指针变量间接访问方式修改形参指针变量所指向的变量的值
    int c;
    c = *pa;
    *pa = *pb;
    *pb = c;
    printf("形参：%d %d\n",*pa,*pb);
}
void exchange2(int a,int b)
{//交换形参指针变量间接访问方式修改形参指针变量所指向的变量的值
    int c;
    c = a;
    a = b;
    b = c;
    printf("形参：%d %d\n",a,b);
}
void text7()
{
    int a = 12;
    int b = 21;
    printf("实参：%d %d\n",a,b);
    exchange1(&a,&b);
    printf("实参：%d %d\n",a,b);
}
/***********************************************************************
 *
 *                      Chapter6练习_内存管理
 *
 ***********************************************************************/
//3、写出输出结果
void foo(int m, int n)
{
    printf("m = %d, n = %d\n", m, n);
}
void text8()
{
    int b = 3;
    foo(b+=3, ++b);
    printf("b = %d\n",b);
}
//4、写出输出结果
int sum(int a)
{
    int b=0;
    static int c=3;
    b+=1;
    c+=1;
    return(a+b+c);
}
void text9()
{
    int i;
    int a=5;
    for(i=0;i<3;i++)
    {
        printf("%d %d\n",i,sum(a));
    }
}
//5、写出输出结果
void text10()
{
    int i=2,j=3,k;
    k=i+j;
    {
        int k=8;
        printf("%d\n",k);
    }
    printf("%d\n",k);

}
//6、写出输出结果
int a=3,b=5;
int MAX(int a,int b)
{
    int c;
    c=(a>b ? a : b);
    return(c);
}
void text11()
{
    int a = 8;
    printf("%d\n",MAX(a, b));
}
/*9、编程题实现以下函数的定义并写出测试函数进行测试：
 通过值传递能否交换两个整型数值？（代码写出来，进行分析其原理）；
 通过传指针的形式交换两个整型数值？
*/
void change1(int a,int b)       //实参传值给形参，a = 10；b = 20
{
    int c;
    c = a;                      //把a的值赋给c   c = 10
    a = b;                      //把b的值赋给a   a = 20
    b = c;                      //把c的值赋给b   b = 10
    printf("形参：%d %d\n",a,b); //实现a和b的值的调换并打印   a = 20；b = 10
}
void change2(int *pa,int *pb)   //实参传值给形参，*pa = a = 10；*pb = b = 20
{
    int c;
    c = *pa;                    //*pa的值传给c   c = *pa = 10
    *pa = *pb;                  //*pb的值传给*pa    *pa = *pb = 20
    *pb = c;                    //c的值传给*pb  *pb = c = 10
    printf("形参：%d %d\n",*pa,*pb);//*pa = 20;*pb = 10
}
void text12()
{
    int a = 10;
    int b = 20;
    printf("实参：%d %d\n",a,b); //调用函数前a，b的值  a = 10；b = 20
    change1(a,b);               //调用函数change1
    printf("实参：%d %d\n",a,b);//调用函数change1后a，b的值    a = 10；b = 20
    change2(&a,&b);              //调用函数change2
    printf("实参：%d %d\n",a,b); //调用函数change2后a，b的值   a = 20；b = 10
}
/*通过值返回的形式，求整型数组中的较大着；
通过指针返回的形式，求整型数组中的较大者；*/
int maX(int a[],int max,int i)
{
    if (i<5) {
        if (a[i]>max)
        {
            max = a[i];
        }
        max = maX(a, max, i+1);
    }
    return max;
}
int *suzu(int *pa,int *max,int i)
{
    if (i<5){
        if (*pa>*max)
            max = pa;
        max = suzu(pa+1, max, i+1);
    }
    return max;
}
int * MX(int array[])
{
    int * Max = &array[0];
    for (int i = 0; i<5; ++i) {
        if (*Max<array[i]) {
            Max = &array[i];
        }
    }
    return Max;
}
int *MA(int array[],int *max,int index)
{
    if (index<5) {
        if (*max<array[index]) {
            max = &array[index];
        }
        max = MA(array,max,index+1);
    }
    return max;
}
void text13()
{
    int a[5]={12,23,21,43,23};
    int *max = &a[0];
    max = suzu(a, max,1);
    printf("max = %d\n",*max);
    max = MX(a);
    printf("max = %d\n",*max);
    max = MA(a,max,1);
    printf("max = %d\n",*max);
    
}
/***************************************************************
 *
 *
 *
 **************************************************************/
void f(int y,int *x)
{
    y=y+*x;
    *x=*x+y;
}
void text14()
{
    int x=2,y=4;
    f(y,&x);
    printf("%d %d\n",x,y);
}
//
void swap(int *a,int *b)
{
    int* t;
    t=a;
    a=b;
    b=t;
}
void text15()
{
    int x=3,y=5,*p=&x,*q=&y;
    swap(p,q);
    printf("%d %d\n",*p,*q);
}
//
void text16()
{
    int a, b, k=4, m=6, *p1=&k, *p2=&m;
    a=p1==&m;
    b=(*p1)/(*p2)+7;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
//
void fun01(int *n)
{
    while((*n)--);
    printf("%d\n",*n);
    printf("%d\n",++(*n));
}
void text17()
{
    int  a=100;
    fun01(&a);
    printf("a=%d\n", a);
    }