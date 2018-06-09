//
//  main.c
//  day05
//
//  Created by mac on 17/12/18.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    int a = 2,b = -3;
//    printf("a & b = %d\na | b = %d\na ^ b = %d\n~b = %d\n~a=%d\n",a&b,a|b,a^b,~b,~a);
//    char a='A';
//    printf("%d\n",a);
//    char i = a;
//    printf("%c\n",i);
    
//    int a = 2 == 3,b = 3 != 2;
//    printf("a=%d,b=%d\n",a,b);
//    char i[10] = {'3','a','s','a','q','w','f','3','2',67};
//    printf("%d,%d,%d\n",i[0],i[3],i[5]);
    
//    int a = 10;
//    printf("%d\n",a--,a++,++a,--a);
//    int b = (a++,++a,--a,a--);
//    printf("%d\n",b++,b+89,++b);
    
//    int score;
//    char grade;
//    printf("请输入一个分数：");
//    scanf("%d",&score);
//    if (score>=90)
//    {
//        grade = 'A';
//    }
//    else if (score>=80)
//    {
//        grade = 'B';
//    }
//    else if (score>=70)
//    {
//        grade = 'C';
//    }
//    else if (score>=60)
//    {
//        grade = 'D';
//    }
//    else
//    {
//        grade = 'E';
//    }
//    printf("等级：%c\n",grade);
    
//    int a = 10,b = 20;
//    {
//        a=a+b;
//        b=a-b;
//        a=a-b;
//    }
//    printf("a = %d,b = %d\n",a,b);
    
//    int x,y,z,t;
//    scanf("%d,%d,%d",&x,&y,&z);
//    if (x>y)
//    {
//        t=x;
//        x=y;
//        y=t;
//    }
//    if (x>z)
//    {
//        t=x;
//        x=z;
//        z=t;
//    }
//    if (y>z)
//    {
//        t=y;
//        y=z;
//        z=t;
//    }
//    printf("smail to big:%d < %d < %d\n",x,y,z);
    
//    long int i;
//    int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
//    printf("从键盘输入当月利润：");
//    scanf("%ld",&i);
//    bonus1 = 10*0.1;
//    bonus2 = bonus1+10*0.075;
//    bonus4 = bonus1+bonus2+20*0.05;
//    bonus6 = bonus1+bonus2+bonus4+20*0.03;
//    bonus10 = bonus1+bonus2+bonus4+bonus6+40*0.015;
//    if (i<=10)
//    {
//        bonus = i*0.1;
//    }
//    else if (i<=20)
//    {
//        bonus = bonus1+(i-10)*0.075;
//    }
//    else if (i<=40)
//    {
//        bonus = bonus2+(i-20)*0.05;
//    }
//    else if (i<=60)
//    {
//        bonus = bonus4+(i-40)*0.03;
//    }
//    else if (i<=100)
//    {
//        bonus = bonus6+(i-60)*0.015;
//    }
//    else
//    {
//        bonus = bonus10+(i-100)*0.01;
//    }
//    printf("bonus = %d\n",bonus);
    
//    int x;
//    for(x=5;x>0;x--)
//        if (x--<5) printf("%d,\n",x);
//        else printf("%d,\n",x++);
    
//    int y=9;
//    for(;y>0;y--)
//    {if(y%3==0)
//    {printf("%d\n",--y);
//        continue;}
//    }
    //求1到100的和
    long long int sum = 1;
    int i;
    for (i = 1; i<=20; i++)
    {
        sum = sum * i;
    }
    printf("sum = %lld\n",sum);
    return 0;
}
