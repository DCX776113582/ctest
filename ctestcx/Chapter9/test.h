//
//  test.h
//  Chapter9
//
//  Created by mac on 18/1/11.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#ifndef __Chapter9__test__
#define __Chapter9__test__
//不带参数的宏
#define Ultraman "奥特曼"
#define Seven "赛文奥特曼"
#define Jack "杰克奥特曼"
#define Ace "艾斯奥特曼"
#define Max(a,b) (a>b?a:c)
#define aer(x) ((x)*(x))
#define ser(x) x*x
#define exchge(x,y){int t;t=(x);(x)=(y);(y)=t;}//宏函数
#define MALLOC(n,type) (type*)malloc(n*sizeof(type))
#define FREE(p) free(p);p=NULL;
struct  {
    int id;
    char name[15];
    double price;
    double discount;
}PHone;
int add(int a,int b);
void test1();
void test2();
void test3();
#endif /* defined(__Chapter9__test__) */
