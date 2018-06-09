//
//  main.c
//  day07
//
//  Created by mac on 17/12/20.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
void print()
{
    printf("Hello Word!\n");
}
int add(int a,int b)
{
    return a+b;
}
int Max(int a,int b,int c)
{
    int max = (a>b)?a:b;
    return (max>c)?max:c;
//    if(a>b&&a>c)
//    {
//        return a;
//    }
//    else if(b>c)
//    {
//        return b;
//    }
//    else{return c;}
}
int Min(int a,int b)
{
    return (a<b)?a:b;
}
float S(int a)
{
    float s = a*a*3.14;
    return s;
}
int main(int argc, const char * argv[]) {
    print();
    print();
    int x = 10;
    int y = 20;
    int z = 30;
    int num = add(x,y);
    int max = Max(x,y,z);
    int min = Min(x,y);
    float s = S(2);
    printf("%d\n%d\n%d\n%f\n",num,max,min,s);
/*    //简单的计算器
    printf("请输入您要计算的数据(如：1+2)：");
    int num1,num2;
    char symbol;
    scanf("%d%c%d",&num1,&symbol,&num2);
    switch (symbol) {
        case '+':
            printf("%d ➕ %d = %d\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d ➖ %d = %d\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d × %d = %d\n",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d ➗ %d = %d\n",num1,num2,num1/num2);
            break;
        case '%':
            printf("%d ％ %d = %d\n",num1,num2,num1%num2);
            break;
        default:printf("数据出错\n");
            break;
    }
    //输出指定数以内的素数
    printf("请输入一个数据：");
    int data,i,j;
    scanf("%d",&data);
    for ( i = 2; i<=data; i++) {
        for ( j = 2; j<=i; j++) {
            if (i%j==0) {
                break;
            }
        }
        if (i==j) {
            printf("%d,",i);
        }
    }
    printf("\n");
    //九九乘法表
    for (int i = 1; i<=9; i++) {
        for (int j = 1; j<=i; j++) {
            printf("\t%dx%d=%d",i,j,i*j);
        }
        printf("\n");
    }
    //输出一个自定义图形
    printf("请输入数据：");
    int n;
    scanf("%d",&n);
    for (int i = 0; i<=n; i++) {
        for (int j = 0; j<=i; j++) {
            printf(" ");
        }
        for (int k = 0; k<=2*n; k++) {
            printf("*");
        }
        for (int j = 0; j<=i; j++) {
            printf(" ");
        }
        for (int j = 0; j<=i; j++) {
            printf("# ");
        }
        for (int j = 0; j<=i; j++) {
            printf("@ ");
        }
        printf("\n");
    }
    for (int i = n-1; i>=0; i--) {
        for (int j = 0; j<=i; j++) {
            printf(" ");
        }
        for (int k = 0; k<=2*n; k++) {
            printf("*");
        }
        for (int j = 0; j<=i; j++) {
            printf(" ");
        }
        for (int j = 0; j<=i; j++) {
            printf("# ");
        }
        for (int j = 0; j<=i; j++) {
            printf("@ ");
        }

        printf("\n");
    }
*/
//    int num[]={0,1,2,3,4,5,6,7,8,9};
//    for (int i = 0; i<10; i++) {
//        printf(" num[%d]=%d",i,num[i]);
//    }
//    printf("\n");
    
//    int num1[10];
//    for (int i = 0; i<10; i++) {
//        num1[i]=i*10;
//    }
//    for (int i = 0; i<10; i++) {
//        printf("num1[%d]=%d\t",i,num1[i]);
//    }
//    printf("\n");
//
//    int num2[5];
//    num2[0]=12;
//    num2[1]=31;
//    num2[2]=54;
//    num2[3]=6;
//    num2[4]=37;
//    for (int i = 0; i<5; i++) {
//        printf("num2[%d]=%d\t",i,num2[i]);
//    }
//    printf("\n");
//    
//    int num3[5];
//    printf("请输入5个数据：");
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&num3[i]);
//    }
//    for (int i = 0; i<5; i++) {
//        printf("num3[%d]=%d\t",i,num3[i]);
//    }
//    printf("\n");
//    char name[6];
//    
//    printf("请输入5个字符：");
//    for (int i = 0; i<6; i++) {
//        scanf("%c",&name[i]);
//    }
//    for (int i = 0; i<6; i++) {
//        printf("name[%d]=%c\t",i,name[i]);
//    }
//    printf("\n");
    
//    char rider[]="NARUTO";
//    printf("%s\n",rider);
//    char rider1[6];
//    rider1[0]='N';
//    rider1[1]='A';
//    rider1[2]='R';
//    rider1[3]='U';
//    rider1[4]='T';
//    rider1[5]='O';
//    for (int i = 0; i<6; i++) {
//        printf("%c ",rider1[i]);
//    }
//    printf("\n");
//    char rider2[6];
//    for (int i = 0; i<6; i++) {
//        rider2[i]=rider1[i];
//        printf("%c ",rider2[i]);
//    }
//    printf("\n");
//    char rider3[6];
//    scanf("%s",rider3);
//    for (int i = 0; i<6; i++) {
//        rider2[i]=rider1[i];
//        printf("%c ",rider2[i]);
//    }
//    printf("%s",rider3);
//    printf("\n");
//    char rider4[5]={'R','U','K','I'};
//        printf("%s\n",rider4);
    
//    for (int i = 1; i<=12; i++) {
//        printf("第%d月:\n",i);
//        for (int j = 1; j<=4; j++) {
//            printf("第%d周:",j);
//            for (int k = 1; k<=7; k++) {
//                printf("第%d天 ",k);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    printf("\n");
    //数组a与数组b的值赋给数组c
//    int a[5]={1,2,3,4,5};
//    int b[5]={6,7,8,9,10};
//    int c[10];
//    for (int i = 0; i<5; i++) {
//        c[i]=a[i];
//    }
//    for (int i = 0; i<5; i++) {
//        c[5+i]=b[i];
//    }
//    for (int i = 0; i<10; i++) {
//        printf("c[%d]=%d  ",i,c[i]);
//    }
//    printf("\n");
    //随机数
//    int shu[]={1,2,3,4,5,6};
//    srand((unsigned)time(NULL));
//    for (int i = 1; i<=6; i++) {
//        
//        printf("%d ",rand()%6);
//    }
//    printf("\n");
//    for (int i = 0; i<10; i++) {
//        
//        printf("%d ",rand()%10);
//    }
//    printf("\n");r
//    srand((unsigned)time(NULL));
//
//    int card[54];
//    for (int i =0; i<54; i++) {
//        card[i]=i+1;
//    }
//    for (int i = 0; i<54; i++) {
//        printf("%d ",card[i]);
//    }
//    printf("\n");
//    for (int i = 0; i<54; i++) {
//        int x = rand()%54;
//        int y = rand()%54;
//        int temp = card[x];
//        card[x]=card[y];
//        card[y]=temp;
//    }
//    for (int i = 0; i<54; i++) {
//        printf("%d ",card[i]);
//    }printf("\n");
    //插入、删除;在任意位置插入以及删除
//    int a[10]={1,2,3,4,5,6,7};
   
    //二维数组：定义并初始化
//    int a[3][3]={1,2,3,4,5,6,7,8,9};//定义三行三列的int型数组a[3][3],
//    char b[3][2]={'N','A','R','U','T','O'};//定义三行两列的char型数组b[3][2]
//    for (int i = 0; i<3; i++) {             //i=0,i=1,i=2
//        for (int j = 0; j<3; j++) {
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    for (int i = 0; i<3; i++) {
//        for (int j = 0; j<2; j++) {
//            printf("%c ",b[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
    //scanf语句初始化二维数组
//    int n[2][3];
//    for (int i = 0 ; i<2; i++) {
//        for (int j = 0; j<3; j++) {
//            scanf("%d",&n[i][j]);
//        }
//    }
//    printf("\n");
//    for (int i = 0 ; i<2; i++) {
//        for (int j = 0; j<3; j++) {
//            printf("%d ",n[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    int m[3][2];
//    for (int i = 0; i<3; i++) {
//        for (int j = 0; j<2; j++) {
//            m[j][i]=b[i][j];
//            printf("%c\t",m[j][i]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    char w[2][3];
//    for (int i = 0; i<2; i++) {
//        for (int j = 0; j<3; j++) {
//            w[i][j]=b[j][i];
//            printf("%c\t",w[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    int a[][3]={12,32,43,54,65,53,32};
//    int b[3][3]={{},{0,5},{}};
//    for (int i = 0 ; i<3; i++) {
//        for (int j = 0; j<3; j++) {
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    for (int i = 0 ; i<3; i++) {
//        for (int j = 0; j<3; j++) {
//            printf("%d ",b[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    char game[]="GAME START";
//    char game1[]="MENU";
//    char game2[]="exit";
//    for (int i = 0; i<10; i++) {
//            printf("%c",game[i]);
//    }
//    printf("\n");
//    for (int i = 0; i<4; i++) {
//        printf("%c",game1[i]);
//    }
//    printf("\n");
//    for (int i = 0; i<4; i++) {
//        printf("%c",game2[i]);
//    }
//    printf("\n");
//    char password[]="123456";
//    char pass[7];
//    printf("请输入密码：");
//    scanf("%s",pass);
//    if (strcmp(pass, password)==0) {
//        printf("密码正确");
//    }
//    printf("\n");
//    int pas[]={1,2,3,4,5,6};
//    int pas1[6];
//    printf("请输入密码：");
//    scanf("%d",pas1);
//    for (int i = 0; i<6; i++) {
//        if (pas1[i]==pas[i])
//            printf("密码正确");
//
//    }
//    printf("\n");
//    int a[6][2]={1,2,3,4,5,6,7,8,9,10,11,12,};
//    int b[2][6];
//    for (int i = 0; i<6; i++) {
//        for (int j = 0; j<2; j++) {
//            printf("\t%d",a[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    for (int i = 0; i<2; i++) {
//        for (int j = 0; j<6; j++) {
//            b[i][j]=a[j][i];
//            printf("\t%d",b[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    int a[5];
//    printf("请输入任意5个数：");
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&a[i]);
//    }
//    int max=a[0];
//    for (int i = 1; i<5; i++) {
//        if (max<a[i]) {
//            max=a[i];
//        }
//    }
//    printf("max = %d ",max);
//    printf("\n");
    //数组的插入与删除
//    int a[10]={1,2,3,4,5,6,7},k,j;   //定义一个数组a[10],并给其前七位赋值，k与j变量作为输入变量。
//    printf("当前数组的值：\n");        //打印输出
//    for (int i = 0; i<7; i++) {      //循环7次，输出数组a[10]前七个元素的值
//        printf("%d ",a[i]);          //打印输出
//    }
//    printf("\n");                    //换行
//    printf("请输入插入值以及位置：");    //打印输出
//    scanf("%d,%d",&k,&j);            //输入自定义的值,k为自定义数，j为插入位
//    for (int i = 8; i>=0; i--) {      //循环9次
//        a[i]=a[i-1];                 //把前一位的值赋给后一位，从右开始
//        if (j==i) {                   //条件
//            break;                    //跳出循环
//        }
//    }
//    a[j-1]=k;                         //将k的值赋给a[j-1]元素
//    for (int i = 0; i<8; i++) {       //循环8次
//        printf("%d ",a[i]);           //打印输出
//    }
//    printf("\n");                     //换行
//    printf("请输入要删除的位置：");      //打印输出
//    int y;                            //定义变量
//    scanf("%d",&y);                   //输入，y为删除位
//    for (int i = 0; i<8; i++) {       //循环8次
//        if (y>i+1) {                  //条件
//            continue;                 //跳出本次循环，继续下次循环
//        }
//        a[i]=a[i+1];                  //把后一位的值赋给前一位
//            }
//    for (int i = 0; i<7; i++) {
//        printf("%d ",a[i]);
//    }
//    printf("\n");
    
//    printf("请输入一个小于5位的数：");
//    int a,b,c,d,num;
//    int k = 0;
//    scanf("%d",&num);
//    for (int i = 0; i<1; i++) {
//        a = num%10;
//        b = num%100/10;
//        c = num%1000/100;
//        d = num/1000;
//        if (num<10) {
//            k = 1;
//            printf("这是一个%d位数,%d",k,a);
//        } else {
//            if (num<100) {
//                k = 2;
//                printf("这是一个%d位数,%d%d",k,a,b);
//            } else {
//                if (num<1000) {
//                    k = 3;
//                    printf("这是一个%d位数,%d%d%d",k,a,b,c);
//                } else {
//                    if (num<10000) {
//                        k = 4;
//                        printf("这是一个%d位数,%d%d%d%d\n",k,a,b,c,d);
//                    }
//                }
//            }
//        }
//    }
    

    
//    int code[3][3];
//    printf("请输入数据：");
//    for (int i = 0; i<3; i++) {
//        for (int j = 0; j<3; j++) {
//            scanf("%d",&code[i][j]);
//        }
//    }
//    int min=code[0][0];
//    for (int i = 0; i<3; i++) {
//        for (int j = 0; j<3; j++) {
//            if (min>code[i][j]) {
//                min = code[i][j];
//            }
//        }
//    }
//    printf(" min = %d \n",min);
    
//    for (int i = 0; i<20; i++) {
//        printf("* ");
//    }
//    printf("\n");
//    char good[20]={'V','e','r','y',' ','G','o','o','d',' ','!','\0'};
//    for (int i = 0; i<12; i++) {
//        printf("%c ",good[i]);
//    }
//    printf("\n");
//    for (int i = 0; i<20; i++) {
//        printf("* ");
//    }
//    printf("\n");

//    int o = 12,b = 32,c = 14;
//    printf("o = %d,b = %o,c = %x\n",o,b,c);
//    char f;
//    scanf("%3c",&f);
//    printf("%3c\n",f);
    
//    int a[5];
//    printf("请输入初始化的数：");
//    for (int i = 0; i<5; i++) {
//        scanf("%d",&a[i]);              //初始化数组元素
//    }
//    printf("\n");
//    printf("请输入您要查询的数据：");
//    int b,c = 0;
//    scanf("%d",&b);                     //b为查询的数
//    for (int i = 0; i<5; i++) {
//        if (a[i]==b) {                  //条件：如果数组元素有等于查询值，则执行if后面的语句
//            c++;                        //c为符合条件的个数
//            printf("第%d个%d，下标是%d\n",c,b,i);//i为元素下标
//        }
//    }
//    if (c!=0) {
//        printf("有%d个%d\n",c,b);
//    }
//    else
//    {
//        printf("没有%d\n",b);
//    }
        return 0;
}
