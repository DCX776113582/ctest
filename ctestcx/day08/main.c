//
//  main.c
//  day08
//
//  Created by mac on 17/12/22.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "day09text.h"
//#include "file1.c"
void kuwo();
float Area(int r);
int SUm();
double fun(double,double);
int Add(int a,int b){
    return a+b;
}
int Sub(int a,int b){
    return a-b;
}
int Mul(int a,int b){
    return a*b;
}
int Div(int a,int b){
    return a/b;
}
int Rem(int a,int b){
    return a%b;
}
int Fac(int n){
    int fac = 1;
    for (int i=1; i<=n; i++) {
        fac=fac*i;
    }
    return fac;
}
int h(int a){
    a = a + 1;
    return a;
}
int Max(int a,int b){
    return (a>b?a:b);
}
int Max1(int a,int b,int c,int d){
    int max;
    max = Max(a, b);
    max = Max(max, c);
    max = Max(max,d);
    return max;
}
//斐波那契数列 输出 第n个值：0 1 1 2 3 5 8 13……（(n-2)+(n-1)）
int ad(int a){
    if (1==a) {
        return 0;
    }
    if (2==a) {
        return 1;
    }
    return ad(a-1)+ad(a-2);
}
//求和
int add(int a){
    if (0==a) {
        return 0;
    }
    if (1==a) {
        return 1;
    }
    return a+add(a-1);
}
//输入一个数：求各位数之和
int add1(int a){
    if (0==a) {return 0;}
    return add1(a/10)+(a%10);
}
extern int xx;          //引入别的文件中的全局变量xx
extern float PI;
extern void print();

int main(int argc, const char * argv[]) {
    {// insert code here...
//    int x = 10;
//    h(x);
//    printf("x = %d\n",x);
//    printf("x = %d\n",h(x));
//    int x=8;
//    printf("%d\n",fac(5));
//    int x,y;
//    char c;
//    printf("请输入两个整数：");
//    scanf("%d%c%d",&x,&c,&y);
//    switch (c) {
//        case '+':
//            printf("%d\n",Add(x,y));
//            break;
//        case '-':
//            printf("%d\n",Sub(x,y));
//            break;
//        case '*':
//            printf("%d\n",Mul(x,y));
//            break;
//        case '/':
//            printf("%d\n",Div(x,y));
//            break;
//        case '%':
//            printf("%d\n",Rem(x,y));
//            break;
//        default:printf("输入有误！\n");
//            break;
//    }
//    int k;
//    printf("请输入阶乘数：");
//    scanf("%d",&k);
//    printf("%d\n",Fac(k));
    
//    int n,ji = 1;
//    scanf("%d",&n);
//    for (int i = 1; i<=100; i++) {
//    }
//    for (int i = 1; i<=n; i++) {
//        ji = ji*i;
//    }
//    printf("%d",ji);
//    int t;
//    for (int i = 2; i<=100; i++) {
//        t=0;
//        for (int j = 2; j<i; j++) {
//            if (i%j==0) {
//                t=1;
//                break;
//            }
//        }
//        if (t==0) {
//            printf("%d ",i);
//        }
//    }
//    srand((unsigned)time(NULL));
//    
//    for (int i = 0; i <10; i++) {
//        printf("%d ",rand()%6);
//
//    }
//    
//    printf("\n");
//    int x = 12,y = 13;
//    int add=sum(x, y);
//    printf("%d\n",add);
//    float area = Area(3);
//    printf("%.2f\n",area);
//    kuwo();
//    double a,b;
//    printf("请输入两个数：");
//    scanf("%lf,%lf",&a,&b);
//    printf("%lf",fun(a, b));
    
//    text1();
//    text2();
//    text3();
//    text4();
//    text5();
//    text6();
//    text7();
//    text8();
//    printf("%d\n",equation(1, 2, 1));
//    printf("%d\n",sgn(3));
//    week();
//    int a,b,c;
//    scanf("%d,%d,%d",&a,&b,&c);
//    printf("%d\n%f\n",trig( a, b, c),triangle_area2(a, b, c));
//    zhengshu();
//    aver();
//    text1_1();
//    printf("%d\n",xx);
//    printf("%f\n",PI);
//    print();
//    int a,b,c,d;
//    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
//    printf("%d\n",Max1(a,b,c,d));
//    sushu();
//    ave();
//   1 sum();
//    int x;
//    printf("请输入：");
//    scanf("%d",&x);
//    printf("%d\n",ad(x));
//    for (int i = 1; i<=x; i++) {
//        printf("%d ",ad(i));
//    }
//    printf("%d",add(x));
//    printf("\n");
//    printf("%d ",add1(x));
//    min();
//    paixu();
//    char zm[26];
//    for (int j = 0; j<26; j++) {
//            zm[j]=j+65;
//    }
//    for (int k = 0 ; k<26; k++) {
//        printf("%c ",zm[k]);
//    }
//    printf("\n");
//    for (int j = 0; j<26; j++) {
//        zm[j]=j+65+32;
//    }
//    for (int k = 0 ; k<26; k++) {
//        printf("%c ",zm[k]);
//    }
//    text1_2();
//    zifuchuan();
//        printf("\n");
    
//    max();
    }
   // text1_2();
//    int a,b,c;
//    printf("请输入三个数：");
//    scanf("%d,%d,%d",&a,&b,&c);
//    printf("max = %d\n",max01(a, b, c));
//    dxs();
//    px();
//    pd();
//    sus();
    yus();
//    paixu();
    return 0;
    
}
double fun(double x,double y){
    return (sqrt(x*x+y*y));
}
int SUm(int a,int b){
    return a+b;
}
float Area(int r){
    return 3.14*r*r;
}
void kuwo(){
    printf("Are You Ready!\n");
}