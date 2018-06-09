//
//  stuInfo.h
//  C_Project
//
//  Created by mac on 18/1/16.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#ifndef __C_Project__stuInfo__
#define __C_Project__stuInfo__

#include <stdio.h>
//a、定义学员结构体类型struct student（包括：long int型num变量存入学号，一个字符串name存入学生姓名，一个整形age，5个浮点型变量成绩）；（5分）
//b、对该类型进行类型别名定义：STUDENT ；数学、物理、英语、计算机、总成绩
struct student {
    long int num;            //学号
    char name[10];           //姓名
    int age;                 //年龄
    float Math;              //数学成绩
    float Physics;           //物理成绩
    float English;           //英语成绩
    float Computer;          //计算机成绩
    float TotalGrade;        //总成绩
};
typedef struct student STUDENT;//类型重命名
void create(int n);
void save();
void load();
void showStudentInfo();
#endif /* defined(__C_Project__stuInfo__) */
