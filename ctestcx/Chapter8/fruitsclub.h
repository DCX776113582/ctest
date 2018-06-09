//
//  fruitsclub.h
//  Chapter8
//
//  Created by mac on 18/1/11.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#ifndef __Chapter8__fruitsclub__
#define __Chapter8__fruitsclub__

#include <stdio.h>
#define MALLOC(n,type) (type*)malloc(n*sizeof(type))
#define FREE(p) free(p);p=NULL;

void test1_01();
typedef int (*FPOINTER)(int, int);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);
int rem(int a, int b);
int result(int(*fp)(int,int),int a,int b);
void test4();
void test03();
void test3();
void test2();
struct iphone
{
    int ID;//商品编号
    char os[10];//系统
    char brand[20];//品牌
    double price;//价格
    int i;//数量
    float discount;//折扣
    double total;//总价
};
typedef struct iphone PHONE;
typedef struct
{
    //    char a[10]; //10
    char a;
    char c;     //1
    int b;      //4
    int g;
    double d;   //8
} MON;
void prt(PHONE s);
void test02();
struct student {//元素：属性
    long id;              //学号
    char name[10];        //姓名
    double score;         //成绩
};
typedef struct student SDU;
void printstudent(SDU s);
typedef struct
{
    int a;
    int b;
    double c;
} STU;

void test1_1();
void test1();
void jisuanqi();

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
double aver(double scores);
//包括ADD（添加）、MODIFIED（修改）、SEARCH（查询）、DELETE（删除）、PRINT（打印）；
typedef enum {ADD添加=1,MODIFIED修改,SEARCH查询,DELETE删除,PRINT打印,SAVE保存,LODE读取,EXIT退出=0} Student_Info;
typedef enum {苹果=1,桔子,香蕉,菠萝} FRUITS;
#define PA 1.15
#define PO 1.20
#define PB 0.95
#define PP 0.85
#define NG "序列号\t货品名\t单价(¥/kg)\t\t重量(kg)\t\t总价(¥)\n"

typedef struct fruit {
    int ID;
    char name1[10];
    double price;
    double wight;
    double toal;
} FRU;
FRU* Add(void);
void MODIFIED(FRU* q[]);
void SEARCH(FRU* q[]);
void DELETE(FRU* p[]);
void PRINT(FRU* q[]);
void fruits();
void save(FRU* q[]);
void test10();
void load();
void EXIT(FRU* p[]);

#endif /* defined(__Chapter8__fruits_club__) */
