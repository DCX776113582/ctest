//
//  main.c
//  day03
//
//  Created by mac on 17/12/14.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
void text01();
void text02();
void text03();
void DrawK();
void GamePlay();
void Close();
int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
//    int w,x,y,z,m;
//    w=1;x=2;y=3;z=4;
//    m=(w<x)?w:x;
//    m=(m<y)?m:y;
//    m=(m<z)?m:z;
//    printf("%d",m);
    
//    int a=100;
//    if (a>100) printf("%d\n",a>100);
//    else printf("%d\n",a<=100);
    
//    int m=4;
//    if (++m>5) printf("%d\n",m--);
//    else printf("%d\n",--m);
    
//    int x;
//    scanf("%d",&x);
//    if (x++>5) printf("%d\n",x);
//    else printf("%d\n",x--);

//    int x=1,y=1,z=-1;
//    x+=y+=z;
//    printf("%d\n",x<y?y:x);
    
//    text01();
//    text02();
    text03();
    
    
    return 0;
}

void text01()
{
//    int x=1,y=1,z=-1;
//    x+=y+=z;
//    printf("%d\n",x<y?y:x);
    
//    int a,b,c=246;
//    a=c/100%9;
//    b=(-1)&&(-1);
//    printf("%d,%d\n",a,b);

//    int num,i,j,k,place;
//    scanf("%d",&num);
//    if (num>99)
//        place=3;
//    else if(num>9)
//        place=2;
//    else
//        place=1;
//    i=num/100;
//    j=(num-i*100)/10;
//    k=(num-i*100-j*10);
//    switch (place)
//    { case 3: printf("%d%d%d\n",k,j,i);
//            break;
//        case 2: printf("%d%d\n",k,j);
//            break;
//        case 1: printf("%d\n",k);
//    }

//    int k=4,a=3,b=2,c=1;
//    printf("%d\n",k<a?k:c<b?c:a);

//    int a,b;
//    scanf("%d",&a);
//    b=a>15?a+10:a-10;
//    printf("%d\n",b) ;

//    int k=-3;
//    if (k<=0) printf("****\n");
//    else printf("####\n")//有语法错误
    
//    int a=5,b=0,c=0;
//    if (a=a+b) printf("****\n");
//    else  printf("####\n");
    
//    int x,y,z,t;
//    x=y=z=1;
//    t=++x || ++y && ++z;
//    printf("%d\n",t);
    
//    int x;
//    x=-1;
//    do
//    {
//        x=x*x;
//    }  while (!x);

//    int x=0,s=0;
//    while (!x!=0) s+=++x;
//    printf("%d\n",s);
    
//    int n=0;
//    while (n++<=2)
//        printf("%d",n);
    
//    int x=0,y=0;
//    while (x<15)
//    {   y++;
//        x+=++y;}
//    printf("%d,%d",y,x);
    
//    int s=0,i=1;
//    while (s<=10)
//    { s=s+i*i;
//        i++;
//    }
//    printf("%d",--i);

//    int x;
//    for(x=10;x>3;x--)
//    { if(x%3)
//        x--;
//        --x;
//        --x;
//        printf("%d ",x);
//    }
    
//    int a,b;
//    a=-1;
//    b=0;
//    do {
//        ++a;
//        ++a;
//        b+=a;
//    } while(a<9);
//    printf("%d\n",b);

//    int i;
//    for(i=1;i<=5;)
//        printf("%d",i);
//    i++;
    
//    int n=4;
//    while (n--) printf("%d ",n--);

//    int i,x,y;
//    double z;
//    scanf("%d %d",&x,&y);
//    for(i=1,z=x;i<y;i++)
//        z=z*x;
//    printf("x^y=%e\n",z);
    
//     int x=23;
//        do
//        { printf("%d",x--);
//        }while(!x);

//    int i,j,m=0;
//    for(i=1;i<=15;i+=4)
//        for(j=3;j<=19;j+=4)
//            m++;
//    printf("%d\n",m);

//    int i;
//    for(i=1;i<6;i++)
//    { if (i%2!=0) {printf("#");continue;}
//        printf("*");
//    }
//    printf("\n");
    
//    int x=10,y=10,i;
//    for(i=0;x>8;y=++i)
//        printf("%d %d ",x--,y);

//    int y=10;
//    do {y--;}
//    while (--y);
//    printf("%d\n",y--);

//    int i,sum=0;
//    for(i=1;i<=3;sum++) sum+=i;
//    printf("%d\n",sum);
    
//    int x = 2;
//    float y = 2.1;
//    double z = 3.1415;
//    char c = 1;
//    printf("%ld,%ld,%ld,%ld\n",sizeof(x),sizeof(y),sizeof(z),sizeof(c));
//    printf("%ld,%ld,%ld,%ld\n",sizeof(int),sizeof(float),sizeof(double),sizeof(char));
    
//    int a = 23,b = 12,max = 0,min = 0;
//    if (a>b)                    //判断a是否大于b
//        max = a;                //如果a>b,执行if后面的语句
//    else
//        max = b;                //a<=b,执行else后面的语句
//    printf("max = %d\n",max);
//    (a<b)?(min = a):(min = b);  /*判断a是否小于b,如果a<b,
//                                 执行min = a;否则执行min = b*/
//    printf("min = %d\n",min);
    
//    int i = 4;
//    if ((i++ == 4)&&(++i == 5))
//    {
//        i++;
//    }
//    else
//    {
//        ++i;
//    }
//    printf("i = %d\n",i++);
    
    int i = 4,j = 5;
    if ((i++ == 4 && j++ == 6)||(++i == 6 && j-- == 6))
    {
        i+=j;
        j+=i;
    }
    else
    {
        i-=j;
        j-=i;
    }
    printf("i = %d,j = %d\n",i,j);
}

void text02()
{
    int year;
    printf("请输入年份：");
    scanf("%d",&year);
    if ((year%400==0)||((year%4==0)&&(year%100!=0)))
    {
        printf("是闰年!\n");
    }
    else
    {
        printf("不是闰年!\n");
    }
    ((year%400==0)||((year%4==0)&&(year%100!=0)))?printf("是闰年!\n"):printf("不是闰年!\n");
}

void text03()
{
    char NAME[20],ADDRESS[20],E_MAIL[20],GENDER[10];
    int age,choose;
    printf("            简历              \n");
    printf("姓名：");
    scanf("%s",NAME);
    printf("年龄：");
    scanf("%d",&age);
    printf("性别：");
    scanf("%s",GENDER);
    printf("邮箱：");
    scanf("%s",E_MAIL);
    printf("地址：");
    scanf("%s",ADDRESS);
    printf("请稍后，您的简历正在生成…………\n………………………………………………………………\n");
    printf("………………生成成功，您的简历请接收………………\n");
    printf("请选择1(YES)或者0(NO):");
    scanf("%d",&choose);
    switch (choose)
    {
        case 1:
            printf("………………接收成功………………\n");
            printf("            简历          \n姓名：%s 年龄：%d\n性别：%s 地址：%s\n邮箱：%s\n",NAME,age,GENDER,ADDRESS,E_MAIL);
            break;
        case 0:
        printf("………………接收失败………………\n………………Bye Bye!………………\n");
            break;
        default:printf("系统出现漏洞，停止服务！\n");
            break;
    }
    
//    int x;
//    x;
//    if (x==1) {
//        printf("x = 0\n",x);
//    }
//    else
//    {
//        printf("错误信息\n");
//    }
}

