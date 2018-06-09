//
//  main.c
//  day04
//
//  Created by mac on 17/12/15.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void faiz();

int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
//    int i = 2,j = 3;
//    if ((i++ == 2||++j == 4)&&(++i == 3||j++ == 5)) {
//        i += j;
//        j = i++;
//    }
//    else
//    {
//        j += i;
//        i = j++;
//    }
//    printf("i = %d,j = %d\n",i,j);
    
//    int a,b,c;
//    int max;
//    printf("请输入任意三个数：");
//    scanf("%d,%d,%d",&a,&b,&c);
//    if (a>b&&a>c) {
//        max = a;
//    }
//    else if (b>a&&b>c)
//        max = b;
//    else
//        max = c;
//    printf("max = %d\n",max);
//    (a>b&&a>c)?(max = a):((b>a&&b>c)?(max = b):(max = c));
//    printf("max = %d\n",max);
//    int temp = (a>b)?a:b;
//    max = (temp>c)?temp:c;
//    printf("max = %d\n",max);
//    switch (max) {
//        case 'a':
//            printf("最大值为a的值:%d\n",a);
//            break;
//        case 'b':
//            printf("最大值为b的值:%d\n",b);
//            break;
//        case 'c':
//            printf("最大值为c的值:%d\n",c);
//            break;
//        default:
//            printf("nice\n");
//            break;
//    }
    
//    int score;
//    char grade;
//    printf("请输入成绩：");
//    scanf("%d,",&score);
//
//    if (score>150||score<0)
//    {
//        printf("您输入有误\n");
//    }
//    else
//    {
//        (score>=90)?(grade = 'A'):((score>=60)?(grade = 'B'):(grade = 'C'));
//        printf("等级为%c\n",grade);
//    }
//    
//    if (score>150||score<0)
//    {
//        printf("您输入有误\n");
//    }
//    else if (score>=90)
//    {
//        grade = 'A';
//        printf("等级：%c\n",grade);
//    }
//    else
//    {
//        if (score>=60)
//        {
//            grade = 'B';
//        printf("等级：%c\n",grade);
//        }
//        else
//        {
//            grade = 'C';
//        printf("等级：%c\n",grade);
//        }
//    }
//    scanf("%s",&grade);
//    switch (grade)
//    {
//        case 'A':
//            printf("90分~150分\n");
//            break;
//        case 'B':
//            printf("60分~90分\n");
//            break;
//        case 'C':
//            printf("0分~60分\n");
//            break;
//        default:
//            printf("输入错误\n");
//            break;
//    }
    
//    int i,j;
//    for(i=0,j=1; i<=j+1; i+=2, j--)
//        printf("%d \n",i);
    
//    char ch;
//    while ((ch=getchar( ))!='\n')
//    { if (ch>='A' && ch<='Z') ch=ch+32;
//    else if (ch>='a' && ch<'z') ch=ch-32;
//        printf("%c",ch);
//    }
//    printf("\n");

//    int a = 5,b = 10;
//    int max;
//    if (a>b)
//    {
//        max = a;
//        printf("max = %d\n",max);
//    }
//    else
//    {
//        max = b;
//        printf("max = %d\n",max);
//    }
    
//    int j = 6,d = 2;
//    if (j!=5&&2 == d)
//    {
//        j++;
//        d--;
//        printf("j = %d,d = %d\n",j,d);
//    }
//    else
//    {
//        j--;
//        d++;
//        printf("j = %d,d = %d\n",j,d);
//    }
    
//    int i = 2,j = 3;
//    if ((i++ == 2|| ++j == 4)||(++i == 4&& j++ == 3))
//        i += j;
//    else
//        j++;
//        i++;
//    printf("%d,%d\n",i,j);
    
//    char a = '1', b = '2';
//    printf("%c,", b++);
//    printf("%d\n", b - a);
    
//    int m = 12, n = 34;
//				printf("%d%d", m++, ++n);
//				printf("%d%d\n", n++, ++m);
    
//    int a, b, d = 25;
//    a = ((d / 10) % 9);
//    b = a && (-1);
//    printf("%d, %d\n", a, b);

    
//    int i = 1, j = 2, k = 3;
//    if (i++ == 1 && (++j == 3 || k++ == 3))
//        printf("%d %d %d\n", i, j, k);

//    int day,month,year,sum,leap;
//    printf("\nplease input year,month,day:\n");
//    scanf("%d,%d,%d",&year,&month,&day); //2015,12,30
//    switch(month) /*先计算某月以前的月份的总天数*/
//    {
//    case 1:sum=0;break;
//    case 2:sum=31;break;
//    case 3:sum=59;break;
//    case 4:sum=90;break;
//    case 5:sum=120;break;
//    case 6:sum=151;break;
//    case 7:sum=181;break;
//    case 8:sum=212;break;
//    case 9:sum=243;break;
//    case 10:sum=273;break;
//    case 11:sum=304;break;
//    case 12:sum=334;break;
//    default:printf("data error.");break;
//    }
//    sum=sum+day; /*再加上某天的天数*/
//    if(year%400==0||(year%4==0&&year%100!=0))/*判断是不是闰年*/
//    {
//        leap=1;
//    }
//    else
//    {
//        leap=0;
//    }
//    if(leap==1 && month>2) /*如果是闰年且月份数大于2,总天数应该加一天*/
//    {
//        sum++;
//    }
//    printf("It is the %dth day.\n",sum);
    
//    int i,k=0, a=0, b=0;
//    for(i=1;i<=4;i++)
//    {
//        k++;
//        if (k%2==0) {a=a+k; continue;}
//        b=b+k;
//        a=a+k;
//    }
//    printf("k=%d a=%d b=%d\n",k,a,b);
    
//    int i,j,k;
//    for(i=0,j=10;i<j;i++,j--)
//        k=i+j;
//    printf("%d\n",k);
    faiz();
    return 0;
}

void faiz()
{
    long int code;
    char heishen[7],MODE[10];
    char mode1[7]={'H','E','I','S','H','E','N'};
    char mode2[7]={'P','H','O','N','E'};
    printf("请选择系统模式：");
    scanf("%s",MODE);
    if(strcmp (MODE,mode1)==0)
    {
        printf("正在启动变身模式\n");
        printf("请输入变身代码\n");
        scanf("%ld",&code);
        switch (code)
        {
            case 555:
                printf("standing by！\n请说出口令\n");
                scanf("%s",heishen);
                char Bianshen[20]={'h','e','i','s','h','e','n'};
                if (strcmp (heishen,Bianshen)==0)
                {
                    printf("complete\n完成变身，请进行战斗吧！\n");
                }
                else
                {
                    printf("无法完成变身，请重新启动程序！\n");
                }
                break;
            case 999:
                printf("ARE YOU READY！\n请选择Y(YES) OR N(NO)！\n");
                char choose;
                scanf("%s",&choose);
                switch (choose)
                {
                    case 'Y':
                        printf("请输入开始口令：");
                        scanf("%s",heishen);
                        printf("GAME START!\n");
                        break;
                    case 'N':
                        printf("返回开始界面！\n");
                        break;
                    default:printf("警告！\n");
                        break;
                }
                break;
            case 333:
                printf("机车启动战斗形态\n");
                scanf("%s",heishen);
                printf("complete\n完成变身，请进行战斗吧！\n");
                break;
            default:printf("转到通话模式，请稍候……\n");
                printf("请输入您要拨打的电话号码：");
                scanf("%ld",&code);
                long int phonenum=17865358170;
                if (code != phonenum)
                {
                    printf("第一次电话号码错误，还有两次机会，请重输：");
                    scanf("%ld",&code);
                    if (code!=phonenum)
                    {
                        printf("第二次电话号码错误，还有一次机会，请重输：");
                        scanf("%ld",&code);
                        if (code!=phonenum)
                        {
                            printf("第三次电话号码错误，机会用尽，退出系统\n");
                        }
                        else
                        {
                            printf("输入号码正确，正在接通……\n");
                        }
                    }
                    else
                    {
                        printf("输入号码正确，正在接通……\n");
                    }
                }
                else
                {
                    printf("输入号码正确，正在接通……\n");
                }

                break;
        }
    }
    else if (strcmp (MODE,mode2)==0)
        {
            printf("请输入您要拨打的电话号码：");
            scanf("%ld",&code);
            long int phonenumber=17865258170;
            if (code!=phonenumber)
            {
                printf("第一次电话号码错误，还有两次机会，请重输：");
                scanf("%ld",&code);
                if (code!=phonenumber)
                {
                    printf("第二次电话号码错误，还有一次机会，请重输：");
                    scanf("%ld",&code);
                    if (code!=phonenumber)
                    {
                        printf("第三次电话号码错误，机会用尽，退出系统\n");
                    }
                    else
                    {
                        printf("输入号码正确，正在接通……\n");
                    }
                }
                else
                {
                    printf("输入号码正确，正在接通……\n");
                }
            }
            else
            {
                printf("输入号码正确，正在接通……\n");
            }
        }
    else
    {
        printf("没有正确输入系统代码，程序退出\n");
    }
}