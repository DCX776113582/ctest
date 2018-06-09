//
//  test.c
//  Chapter9
//
//  Created by mac on 18/1/11.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include "test.h"
#include <stdio.h>
#include <stdlib.h>

//带参数的宏
#define PI(x) 3.14
//#define Max(a,b) ((a)>(b)?(a):(b))
int add(int a,int b)
{
    return a+b;
}
void test1()
{
//    int a,b;
//    printf("请输入：");
//    scanf("%d%d",&a,&b);
//    printf("%d %s %s %s\n",add(a, b),Seven,Jack,Ace);
//    int a,b = 3;
//    a = aer(b+2);
//    printf("%d\n",a);
    int *p = MALLOC(1,int);
    int a = 2,b = 3;
    *p = 5;
    exchge(*p,b);
    printf("%d %d\n",*p,b);
    FREE(p);
}
void test2()
{
    char *p = MALLOC(5, char);
#define EBUG 3
#if 0==EBUG
    test1();
#elif 1==EBUG
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    printf("%d %d %d %d %d\n",p[0],p[1],p[2],p[3],p[4]);
#else
    p = "ARE YOU READY!";
    printf("%s\n",p);
#endif
}
void test3()
{
    
}
