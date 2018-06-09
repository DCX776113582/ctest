//
//  stdinfo.h
//  C_FinalTest
//
//  Created by mac on 18/1/16.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#ifndef __C_FinalTest__stdinfo__
#define __C_FinalTest__stdinfo__

#include <stdio.h>
#include <stdlib.h>
#define MALLOC(n,type) (type)malloc(n*sizeof(type))
#define FREE(p) free(p);p=NULL;
typedef struct student{
    int num;
    char name[10];
    int age;
    float math;
    float english;
    float phy;
    float com;
    float sum;
}STUDENT;
void create(int n);
void save();
void load();
void print();

#endif /* defined(__C_FinalTest__stdinfo__) */
