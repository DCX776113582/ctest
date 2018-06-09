//
//  text.c
//  day01_1
//
//  Created by mac on 17/12/12.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include "text.h"                       //自定义头文件
void text()                             //函数名
{
    printf("DRIVE TYPE SPEED!\n");      //输出待打印的字符串
}
//连续输入
void text1()
{
    int m,n,p;                          //定义变量m，n，p
    scanf("%d%d%d",&m,&n,&p);     //键盘输入，变量初始化
    printf("%d%d%d\n",m,n,p);           //输出待打印内容
}
//英寸转换为厘米
void text2()
{
    float yinches;                      //定义字符型变量yinches
    float cm;                           //定义字符型变量cm
    printf("please input yinches:");    //提示
    scanf("%f",&yinches);               //输入数据
    cm = 2.54*yinches;                  //计算公式
    printf("%.2fyinches = %.4fcm\n",yinches,cm);//打印输出
}
//计算
void text3()
{
   
    unsigned int j;
    j = 2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2;
    printf("%d\n",j);
}
//if……else
void text4()
{
    int i;
    int j = 123456;
    printf("please input your MIMA:");
    scanf("%d",&i);
    if (i==j)
    {
        printf("密码正确，请继续下一步操作！\n");
    }
    else
    {
        printf("密码错误！\n");
    }
}
//+-*/%有一学生英语成绩120，数学成绩129，语文成绩145，请计算总分及平均成绩。
void text5()
{
    int english,math,chinese,sum,average;
    english = 120;
    math = 129;
    chinese = 145;
    sum = english+math+chinese;
    average = sum/3;
    printf("sum = %d\naverage = %d\n",sum,average);
}