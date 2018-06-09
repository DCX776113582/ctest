//
//  stuInfo.c
//  C_Project
//
//  Created by mac on 18/1/16.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include "stuInfo.h"
#include <stdlib.h>
#include <stdio.h>
/*a、STUDENT students[5]; //定义一个全局的结构类型数组变量来储存5名学员；（说明：可以是通过动态内存管理STUDENT* students[5];）（10分）
 b、void create(int n) ;//进行定义函数来创建5名学生变量，并手动键盘初始化变量；（10分）
 c、void save(); //自定义函数 save 保存学生数据数据到文件中；（20分）
 e、void load(); // 自定义函数load 读取文件数据到内存中；（20分）
 f、void showStudentInfo(STUDENT students[]);//自定函数打印学生信息（10分）
*/
STUDENT students[5];//定义一个全局的结构类型数组变量来储存5名学员
STUDENT student[5];
void create(int n)//进行定义函数来创建5名学生变量，并手动键盘初始化变量
{
    for (int i = 0; i<n; ++i) {
        printf("请输入第%d个学员的信息:",i+1);
        scanf("%ld%s%d%f%f%f%f",&students[i].num,students[i].name,&students[i].age,&students[i].Math,&students[i].Physics,&students[i].English,&students[i].Computer);
        students[i].TotalGrade=students[i].Math+students[i].Physics+students[i].English+students[i].Computer;
    }    
}
void save()//自定义函数 save 保存学生数据数据到文件中
{
    FILE *fp = NULL;
    fp = fopen("/Users/mac/Desktop/c/C_Project/C_Project/test.txt", "w");
    puts("文件打开成功！");
    if (fp!=NULL) {
        fprintf(fp, "num\tname\tage\tMath\tPhysics\tEnglish\tComputer\tTotalGrade\n");
        for (int i = 0; i<5; ++i) {
            fprintf(fp, "%ld\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",students[i].num,students[i].name,students[i].age,students[i].Math,students[i].Physics,students[i].English,students[i].Computer,students[i].TotalGrade);
        }
    }
    int i = fclose(fp);
    if(0==i)
    {
        puts("文件关闭成功！");
    }
    fp = NULL;
}
void load()// 自定义函数load 读取文件数据到内存中
{
    FILE* fp = NULL;
    fp = fopen("/Users/mac/Desktop/c/C_Project/C_Project/test.txt", "r");
    puts("文件打开成功");
    if (fp!=NULL) {
        char str[15];
        for (int i = 0;i<8 ; ++i) {
            if(fscanf(fp, "%s",str)!=EOF)
            {
            printf("%s\t",str);
            }
        }
        printf("\n");
        for (int i = 0; i<5; i++) {
            fscanf(fp,"%ld%s%d%f%f%f%f",&student[i].num,student[i].name,&student[i].age,&student[i].Math,&student[i].Physics,&student[i].English,&student[i].Computer);
            student[i].TotalGrade=student[i].Math+student[i].Physics+student[i].English+student[i].Computer;
            fscanf(fp, "%f",&student[i].TotalGrade);
        }
        for (int i = 0; i<5; ++i) {
        printf("%ld\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",student[i].num,student[i].name,student[i].age,student[i].Math,student[i].Physics,student[i].English,student[i].Computer,student[i].TotalGrade);
        }
    }
    int i = fclose(fp);
    if(0==i)
    {
        puts("文件关闭成功！");
    }
    fp = NULL;
}
void showStudentInfo()//自定函数打印学生信息
{
    puts("num\tname\tage\tMath\tPhysics\tEnglish\tComputer\tTotalGrade");
    for (int i = 0; i<5; ++i) {
        printf("%ld\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",students[i].num,students[i].name,students[i].age,students[i].Math,students[i].Physics,students[i].English,students[i].Computer,students[i].TotalGrade);
    }
}