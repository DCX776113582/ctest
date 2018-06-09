//
//  chapter6_20180102.c
//  Chapter6
//
//  Created by mac on 18/1/3.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>
#include "chapter6_20180102.h"
int * max(int array[])//求数组最大值，返回指针
{
    int * Max = &array[0];
    for (int i = 0; i<5; ++i) {
        if (*Max<array[i]) {
            Max = &array[i];
        }
    }
    return Max;
}
int a[] = {0,2,4,6,8};
int *p[5]={a, a+1, a+2, a+3, a+4};
int ** pp = p;//p是int**类型
void q1()
{
    printf("%d\n",**pp);
    printf("%d\n", **pp ++);//**pp=*(p[0])=*(&a[0])=a[0]
    printf("%p\n",*pp);
    printf("%ld\n", *pp-a);//*pp=p[1]=a+1,a+1-a=1
    printf("%p\n",*pp);
    printf("%d\n", ** ++ pp);//*(*pp+1)=*p[2]=*(a+2)=*(&a[2])=a[2]
    printf("%p\n",pp);
    printf("%p\n",p);
    printf("%ld\n", pp - p);//&p[2]-&p[0],a+2-a=2
    printf("%p\n",*pp);
}
void q2()//指针指向最大值
{
    int array[5] = {1,2,9,4,5};
    int * p = max(array);
    printf("max = %d\n",*p);
}
void printfArray(int array[],int n)//数组循环输出
{
    for (int i = 0; i<n; ++i) {
        printf("第%d个元素 = %d",i+1,array[i]);
        printf("\n");
    }
    printf("\n");
}
void q3(int n)
{
    int a = 0;
    int array[n];
    int * p = &a;
    for (int i = 0; i<n; ++i) {
        array[i] = *p;
    }
    printfArray(array, n);
}
void q4(int n)
{
    
    int array[n];
    int * p = &array[0];
    for (int i = 0; i<n; ++i) {
        p[i] = 0;
    }
    printfArray(array, n);
}
void q5()
{
    int i;
    int* pn = (int*)calloc(10, sizeof(int));
    for(i=0;i<10;i++)
    {
        pn[i]=i;
        printf("%d ", pn[i]);
    }
    printf("\n");
    free(pn);
    pn = NULL;
}
void q6()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};//栈区数组
    //栈区的指针变量pn指向堆区的数组首元素。
    int * pn = (int *)calloc(10, sizeof(int));
    for (int i = 0; i<10; ++i) {
        pn[i] = i+1;//用指针变量名称当作“数组名”使用
        printf("\t%d",pn[i]);//用指针变量名称当作“数组名”使用
        if ((i+1)%2==0) {
            printf("\n");
        }
    }
    printfArray(pn, 10);
    free(pn);//释放pn指向的堆内存
    pn = NULL;//指针置空
    pn = &array[0];//栈区的指针变量pn指向栈区的数组首元素
    for (int i = 0; i<10; ++i) {
        printf("%d %d ",pn[i],array[i]);
    }
    printf("\n");
}
void q7()
{
    int * pn = (int *)malloc(5*sizeof(int));
    printf("malloc:%p\n",pn);
    for (int i = 0; i<5; ++i) {
        pn[i] = i+1;//用指针变量名称当作“数组名”使用
        //        printf("\t%d",pn[i]);
        //        if ((i+1)%2==0) {
        //            printf("\n");
        //        }
    }
    printf("\n");
    int * pm = (int *)realloc(pn, 10*sizeof(int));
    printf("realloc:%p\n",pm);
    for (int i = 5;i<10 ; ++i) {
        pm[i] = i+1;
        //        printf("\t%d",pn[i]);
        //        if ((i+1)%2==0) {
        //            printf("\n");
        //        }
    }
    printfArray(pm, 10);
    int * po =(int *)realloc(pm, 3*sizeof(int));
    printf("realloc:%p\n",po);
    for (int i = 0;i<3 ; ++i) {
        po[i] = i+1;
    }
    printfArray(po, 3);
    free(po);
    po = NULL;
}
void q8()
{
    int i;
    int* pn=(int*)malloc(5*sizeof(int));
    printf("malloc:%p\n",pn); //0x1001
    for(i=0;i<5;i++)
    {
        pn[i]=i; }
    pn=(int*)realloc(pn, 10*sizeof(int));
    printf("realloc:%p\n",pn);//0x2001
    for(i=5;i<10;i++)
    {
        pn[i]=i; }
    for(i=0;i<10;i++)
    {
        printf("%-3d",pn[i]);
    }
    printf("\n");
    free(pn);
    pn = NULL;
}
void q9()//指向指针的指针；二维指针，多维指针
{
    int a = 10;
    int * p = &a;//p = &a,*p = a = 10
    int * *q = &p;//*q = p = &a,**q = *p = 10
    int ** *r = &q;//*r = *q = p = &a,***r = **q = *p = 10
    int *** *s = &r;//*s = *r = *q = p = &a,****s = ***r = **q = *p = 10
    scanf("%d",***s);
    printf("%d %d %d %d %d\n",a,*p,**q,***r,****s);
    printf("%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n",&a,p,&p,q,&q,r,&r,s,&s);
}
void q10()//大小和兼容性，Demo6_10
{
    char c;
    char *pc;
    int a;
    int *pa;
    double x;
    double *px;
    printf("sizeof(c)=%ld sizeof(pc)=%ld sizeof(*pc)=%ld\n",sizeof(c),sizeof(pc),sizeof(*pc));
    printf("sizeof(a)=%ld sizeof(pa)=%ld sizeof(*pa)=%ld\n",sizeof(a),sizeof(pa),sizeof(*pa));
    printf("sizeof(x)=%ld sizeof(px)=%ld sizeof(*px)=%ld\n",sizeof(x),sizeof(px),sizeof(*px));
}
void q11()
{
    //    int *a = (int *)malloc(3*sizeof(int));
    //    for (int i = 0; i<3; ++i) {
    //        a[i]=i+1;
    //    }
    int a[3] = {2,4,3};
    int *p = (int *)malloc(3*sizeof(int));
    for (int i = 0; i<3; ++i) {
        p[i]=a[i];
    }
    p = realloc(p, 6*sizeof(int));
    int b[3] = {6,7,8};
    for (int i = 3; i<6; ++i) {
        p[i]=b[i-3];
    }
    printfArray(p, 6);
    free(p);
    p = NULL;
}
void input(int *a,int n)//输入函数
{
    printf("请输入%d个整数:",n);
    for (int i = 0; i<n; ++i) {
        scanf("%d",&a[i]);
    }
}
void deal(int *a,int n)//排序函数
{
    for (int j = 0; j<n; ++j) {
        for (int i = j+1; i<n; ++i) {//j=0,i=1,2,……n-1;j=1,i=2,……n-1;j=2，
            if (a[j]>a[i]) {        //比较相邻元素大小，如果条件成立，较小的数放在前面
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
                
            }
        }
    }
}
void print(int *a,int n)//输出函数
{
    for (int i = 0; i<n; ++i) {
        printf("%d ",a[i]);
    }
}
void text()//测试函数：Exercise 15
{
    //    int array[5];
    int *a = (int *)malloc(5*sizeof(int));//将指针变量a当数组名使用
    int n;
    printf("请输入元素个数：");
    scanf("%d",&n);
    input(a,n);//调用输入函数
    deal(a,n);//调用排序函数
    print(a,n);//调用输出函数
    printf("\n");
    free(a);//释放a所指向的堆上的空间
    a = NULL;//指针变量置空
}
