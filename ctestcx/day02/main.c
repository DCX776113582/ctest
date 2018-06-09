//
//  main.c
//  day02
//
//  Created by mac on 17/12/13.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <math.h>
void text4();               //声明函数text4()
void text5();               //声明函数text5()
void text6();
void text7();
void text8();
void text9();
int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
//    text4();                //调用函数
//    text5();
//    text6();
//    text7();
//    text8();
    text9();
    return 0;
}
//if……else
void text4()
{
    int i;
    int j = 123456;                           //已知密码为123456
    printf("please input your MIMA:");
    scanf("%d",&i);                           //即将输入密码
    if (i==j)                 /*如果你输入的密码与已知密码相同*/
    {
        printf("密码正确，请继续下一步操作！\n");//打印输出
    }
    else                                    //否则
    {
        printf("密码错误！\n");              //输出此内容
    }
}
/*  +-*\/%有一学生英语成绩120，数学成绩129，语文成绩145，物理74.5，
化学77.5，历史87.5，请计算总分及平均成绩和取余。*/
void text5()
{
    int english,math,chinese,sum,average,quyu;
    float physics,chemistry,histry;
    english = 120;
    math = 129;
    chinese = 145;
    physics = 74.5;
    chemistry = 77.5;
    histry = 87.5;
    sum = english+math+chinese+physics+chemistry+histry;
    average = sum/6;
    quyu = sum%6;
    printf("sum = %d\naverage = %d\nquyu = %d\n",sum,average,quyu);
}
//求任意一个4位数的个位数字？十位数字？百位数字？千位数字？
void text6()
{
    int number,_one,_ten,_hundred,_thousand;
    printf("please input a 4 bit number:");
    scanf("%d",&number);
    _thousand = number/1000;
    _hundred = number%1000/100;
    _ten = number%100/10;
    _one = number%10;
    printf("千位 = %d\n百位 = %d\n十位 = %d\n个位 = %d\n",_thousand,_hundred,_ten,_one);
}

void text7()
{
    int age;
    char NAME[20],academic[20];
    printf("please input your name:");
    scanf("%s",NAME);
    printf("please input your age:");
    scanf("%d",&age);
    printf("please input your academic:");
    scanf("%s",academic);
    printf("姓名：%s\n年龄：%d\n学历：%s\n",NAME,age,academic);
}
/*i++、i--、++i、--i的使用，前置自增自减，先自增自减再使用运算后的值；后置自增自减，先使用当前值，再进行自增自减运算*/
void text8()
{
//    int i = 10;
//    i++;
//    printf("i = %d\n",i);
//    i--;
//    printf("i = %d\n",i);
//    ++i;
//    printf("i = %d\n",i);
//    --i;
//    printf("i = %d\n",i);
//    int x = 15;
//    int y = x++;
//    int z = ++y;
//    printf("x = %d\ny = %d\nz = %d\n",x--,--y,z++);
//    int m, n;
//    m = 10;
//    m++;            //m=m+1==11
//    n = m++;        //n==m==11,m=m+1==12
//    printf("m = %d,n = %d\n",m,n);//12,11
//    n = ++m;        //n=m+1==13,m=m+1=13
//    printf("m = %d,n = %d\n",m,n);//13,13
//    ++n;            //n=n+1==14
//    printf("m = %d,n = %d\n",--m,n);//m=m-1==12,n=14
//    int i = 100;
//    int a = 15;
//    i += 100;
//    printf("i = %d\n",i);//i=i+100==200
//    i -= 29;
//     printf("i = %d\n",i);//i=i-29==171
//    i *= 12;
//     printf("i = %d\n",i);//i=i*12==2052
//    i /= 21;
//     printf("i = %d\n",i);//i=i/21==97
//    i %= 10;
//     printf("i = %d\n",i);//i=i%10==7
//    a += 1;
//     printf("a = %d\n",a);//a=a+1==16
//    a -= 1;
//     printf("a = %d\n",a);//a=a-1==15
//    i *= a;
//     printf("i = %d\n",i);//i=i*a==7*15==105
    int a = 89;
    ++a;                            //a=a+1==90
    printf("a = %d\n",a++);         //a++=a==90 a=a+1==91
    printf("a = %d\n",a--);         //a--=a==91 a=a-1==90
    printf("a = %d\n",--a);         //--a==a-1=89
    printf("a = %d\n",++a);         //++a==a+1=90
    a--;                            //a=a-1==89
    printf("a = %d\n",--a);         //--a==a-1=88
    printf("a = %d\n",a++);         //a++=a==88 a=a+1==89
    printf("a = %d\n",a);           //a=89
    int i,j,m,n;
    i = 10;
    j = 10;
    n = (j--)+(--j)+(--j);          //10+8+7
    m = ((i++)+(i--)+(i++));        //10+11+10
    printf("m = %d,i = %d\n",m,i);  //31 11
    printf("n = %d,j = %d\n",n,j);  //25 7
}
/*1、编写一个程序，调用printf()函数在一行上输出您的名和姓，再调用一次printf()函数在两个单独的行上输出您的名和姓，然后调用一对printf()函数在一行上输出您的名和姓。
  2、编写一个程序输出您的姓名及住址。
  3、编写一个程序，把您的年龄转换成天数并显示二者的值。不用考虑平年( fractional year)和闰年(leapyear)的问题。 
  4、编写一个程序，创建一个名为toes的整数变量。让程序把toes设置为10。再让变量记录两个toes的和以及toes的平方。程序应该输出所有的3个值。
 5、编写一个能够产生下列输出的程序：
 Smile ! Smile ! Smile
 Smile ! Smile !
 Smile !
*/
void text9()
{
//    printf("Chuanxin Duan\n");
//    printf("Chuanxin\nDuan\n");
//    printf("Chuanxin ");
//    printf("Duan\n");
//    
//    char name[20],address[20];
//    printf("Please input your name:");
//    scanf("%s",name);
//    printf("Please input your address:");
//    scanf("%s",address);
//    printf("姓名：%s\n地址：%s\n",name,address);
//    
//    int age,day;
//    printf("Please input your age:");
//    scanf("%d",&age);
//    day = age*365+31+15;
//    printf("年龄：%d\n天数：%d\n",age,day);
//    
//    int toes,sum,square;
//    toes = 10;
//    sum = toes+toes;
//    square = toes*toes;
//    printf("toes = %d,sum = %d,square = %d\n",toes,sum,square);
//    
//    printf("Smile ! Smile ! Smile !\n");
//    printf("Smile ! Smile !\n");
//    printf("Smile !\n");
//    
//    int i = 10,j = 10,k = 3;
//    k *= i+j;
//    printf("k = %d\n",k);
    
//    char q;
//    scanf("%c",&q);
//    printf(" %c%c   %c%c     %c %c     %c\n",q,q,q,q,q,q,q);
//    printf("%c  %c %c  %c    %c  %c   %c \n",q,q,q,q,q,q,q);
//    printf("%c   %c   %c    %c   %c %c  \n",q,q,q,q,q,q);
//    printf(" %c     %c     %c    %c   \n",q,q,q,q);
//    printf("  %c   %c      %c   %c %c  \n",q,q,q,q,q);
//    printf("   %c %c       %c  %c   %c \n",q,q,q,q,q);
//    printf("    %c        %c %c     %c\n",q,q,q,q);
//    
//    int x = 10;
//    x+=3+x%(3);
//    printf("%d",x);

    

    
    
}

