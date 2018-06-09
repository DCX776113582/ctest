//
//  day09text.c
//  day08
//
//  Created by mac on 17/12/23.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include "day09text.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
/*
 *  分别用三种循环语句完成从1到n的n个自然数的累加。1+2+3+4+5…+n=?
 */
void text1(){
    //for循环
    int n,sum = 0;
    printf("请输入n的值：");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++) {
        sum = sum + i;
    }
    printf("sum = %d\n",sum);
    //while循环
    printf("请输入n1的值：");
    int j = 1,sum1 = 0;
    scanf("%d",&n);
    while (j<=n) {
        sum1 = sum1 + j;
        j++;
    }
    printf("sum1 = %d\n",sum1);
    //do while循环
    printf("请输入n2的值：");
    int k = 1,sum2 = 0,n2;
    scanf("%d",&n2);
    do {
        sum2 = sum2 + k;
        k++;
    } while (k<=n2);
    printf("sum2 = %d\n",sum2);
    printf("\n");
}

/*
 * 输出100以内的整数，包括100，每行输出10个。
 */
void text2(){
    for (int i = 1; i<=100;i++) {
        printf("\t%d",i);
        if (i%10==0) {
            printf("\n");
        }
    }
    printf("\n");
}
/*
 * 输出以下#三角图形，共5行，#数目逐行加1。
 */
void text3(){
    for (int i = 1; i<6; i++) {
        for (int j = 5-i; j>0; j--) {
            printf(" ");
        }
        for (int k = 0; k<i; k++) {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");
}
/*
 * 功能：编写一个程序，输出以下乘法表。
 * 乘法表的特点是：
 * 共有9行；
 * 每行的式子数很有规律，即属于第几行，就有几个式子；
 * 对于每一个式子，既与所在的行数有关，又与所在行的具体位置（列）有关。
 */
void text4(){
    for (int i = 1; i<10; i++) {
        for (int j = 1; j<=i; j++) {
            printf("\t%dx%d=%d",i,j,i*j);
        }
        printf("\n");
    }
}
/*
 * 检测给定整数是否素数。
 分析：一个自然数，若除了1和它本身外不能被其它整数整除，则称为素数。例如2，3，5，7……。根据定义，测试自然数k能否被2，3，……，k-1整除，只要能被其中一个整除，则k不是素数，否则是素数。程序中设立标志量tag,tag为0时, k不是素数, tag不为0时, k是素数。
 */
void text5(){
    int k,tag=1;
    printf("请输入一个数：");
    scanf("%d",&k);
    for (int i = 2; i<k;i++) {
            if (k%i==0) {
                tag=0;
                break;        }
    }
    if (tag==1) {
        printf("%d是素数\n",k);
    }
    else
    {
        printf("%d不是素数\n",k);
    }

}
/*
 * 求3到100之间的所有素数。
 *分析：为了提高效率，我们可对素数的判定做下面的改进：
 *（1）在3到100间的素数，应均为奇数，因此，外层循环可以改为：
 　　			for ( k=3; k<＝100; k+=2 )
 这样减少一半数的判断，节省了时间。
 *（2）若自然数k是素数，则k不能被2，3，……，整除。所以内层循环可以改为：
 　　			for ( i=2; i<=sqrt(k); i++ )
	这样当k较大时，用这种办法，除的次数大大减少，提高了运行效率。
 */
void text6(){
    int tag;
    for (int i = 3; i<=100; i+=2) {
        tag = 1;
        for (int j = 2; j<=sqrt(i); j++) {
            if (i%j==0) {
                tag = 0;
                break;
            }
        }
        if (tag==1) {
            printf("%d ",i);
        }
    }
    printf("\n");
}
/*{#include<stdio.h>
int main()
{
    int a = 1, b;
    for (b = 1; b <= 10; b++)
    {
        if (a >= 8)
            break;
        if (a % 2 == 1)
        {
            a += 5;
            continue;
        }
        a -= 3;
    }
    printf(“%d\n”, b);
    return 0;
}程序的运行结果是：______}*/
void text7(){
    int a = 1, b;
    for (b = 1; b <= 10; b++)
    {
        if (a >= 8)
            break;
        if (a % 2 == 1)
        {
            a += 5;
            continue;
        }
        a -= 3;
    }
    printf("%d\n",b);

}
//语句 for( ; -1; )是什么意思?
void text8(){
    for (; -1; ) {
        
    }
}
//1. 从键盘上输入两个整数，求出它们的和
int Sum(int a,int b){
    return a+b;
}
//2. 已知三角形的底和高，求出三角形的面积。
int triangle_area(int a,int b){
    return a*b/2;
}
//3. 从键盘上输入三角形的底和高，求出三角形的面积。
int triangle_area1(int a,int b){
    scanf("%d,%d",&a,&b);
    return a*b/2;
}
//4. 已知三角形的三边长，求出三角形的面积。
float triangle_area2(float a,float b,float c){
    float area,p;
    p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    return area;
}
//5. 已知二元一次方程的三个系数，求方程的一个根。
int equation(int a,int b,int c){
    int x1;
        x1=((-b)+sqrt(b*b-4*a*c))/2*a;
    if (a==0) {
        return 0;
    }
    return x1;
}
//6. 编程实现符号函数。当x <0 ,则sgn(x)=-1, 当x >0 ,则sgn(x)=+1, 当x =0 ,则sgn(x)=0
int sgn(int x){
    return (x>0)?(+1):((x==0)?0:-1);
}
//7. 从键盘上输入数字星期，在屏幕上显示英文星期。
void *week(){
    char*mon="Monday";
    char*tue="Tuesday";
    char*wen="Wednesday";
    char*thu="Thursday";
    char*fri="Friday";
    char*sat="Saturday";
    char*week="error";
    char*sun="Sunday";
    int x;
    printf("请输入星期数：");
    scanf("%d",&x);
    switch (x) {
        case 1:printf("%s\n",mon);break;
        case 2:printf("%s\n",tue);break;
        case 3:printf("%s\n",wen);break;
        case 4:printf("%s\n",thu);break;
        case 5:printf("%s\n",fri);break;
        case 6:printf("%s\n",sat);break;
        case 7:printf("%s\n",sun);break;
        default: printf("%s\n",week);break;
    }
    return 0;
}
//8. 从键盘输入三角形的三边长，判断出这三边能否构成三角形
int trig(int a,int b,int c){
    if (a+b>c&&a-b<c&&a+c>b&&a-c<b&&b+c>a&&b-c<a) {
        return 1;
    }
    else{
        return 0;
    }
}
//9. 从键盘输入10个整数，求出最小值
void zhengshu(){
    int a[10],t;
    printf("请输入10个整数：");
    for (int i = 0; i<10; i++) {
        scanf("%d",&a[i]);

    }
        t = a[0];
    for (int i = 0; i<10; i++) {
        if (t>a[i]) {
            t=a[i];
        }
    }
    printf("min = %d\n",t);
}
//10. 从键盘输入10个整数，求出它们的平均值
void aver(){
    int a[10];
    for (int i = 0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (int i = 0; i<10; i++) {
        sum = sum +a[i];
    }
    int ave;
    ave=sum/10;
    printf("%d\n",ave);
}
//11. 编程在屏幕上输出具有7行的正三角形
void text1_1(){
    for (int i = 0; i<7; i++) {
        for (int j = 7; j>i-1; j--) {
            printf(" ");
        }
        for (int k = 0; k<=2*i; k++) {
            printf("*");
        }
        printf("\n");
    }
}
//12. 求出8的阶乘（请使用递归实现，并解释递归的含义）
int fac(int a){
    if (0==a||1==a) {
        return 1;
    }
    else
    {
        return a*fac(a-1);          //在调用函数中再次直接或间接调用该函数本身
    }
}
//13、从键盘输入20个整数，求出不大于90所有数的和
void sum(){
    int a[20],sum=0;
    for (int i = 0; i<20; i++) {
        scanf("%d",&a[i]);
    }
    for (int j = 0; j<20; j++) {
        if (a[j]<=90) {
            sum= sum+a[j];
        }
    }
    printf("%d\n",sum);
}
//14、从键盘输入一个整数，判断这个数是否为素数
void sushu(){
    int a,t=0;
    scanf("%d",&a);
    for (int i = 2; i<a; i++) {
        if (a%i==0) {
            t=1;
        }
    }
    if (t==1){
        printf("%d不是素数\n",a);
    } else {
        printf("%d是素数\n",a);
    }
}
//15、从键盘输入20个整数，求出它们的平均值及比平均值大的数
void ave(){
    int a[20],sum = 0,ave;
    for (int i = 0; i<20; i++) {
        scanf("%d",&a[i]);
    }
    for (int j = 0; j<20; j++) {
        sum = sum + a[j];
    }
    ave  = sum/20;
    printf("ave = %d\n",ave);
    for (int i = 0; i<20; i++) {
        if (a[i]>ave) {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}
//16、已知五个整数3，－5,8，2,9，求出最大值
void max(){
    int a[]={3,-5,8,2,9};
    int b = a[0];
    for (int i = 0; i<5; i++) {
        if (b<a[i]) {
            b = a[i];
        }
    }
    printf("%d\n",b);
}
//17、从键盘输入20个整数，求出它们的最小值，并求最小值所在位置
void min(){
    int a[10];
    printf("请输入10个整数：");
    for (int i = 0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    int min = 0;
    for(int i=1;i<10;i++){
        if(a[i]<a[min])
            min=i;     }
    printf("min=%d,a[%d]\n", a[min],min);
}
//18、从键盘输入10个实数，按从大到小的顺序排列起来
void paixu(){
    float a[10];
    for (int i = 0; i<10; ++i) {
        scanf("%f",&a[i]);
    }
    for (int i = 0; i<10; ++i) {
        for (int j = i+1; j<10; ++j) {
            float c;
            if (a[i]<a[j]) {
                c=a[i],a[i] = a[j],a[j]=c;
            }
        }
    }
    for (int i = 0; i<10; ++i) {
        printf("%.2f ",a[i]);
    }
}
//19、已知五个字符串"China","American","Japan","France","Australia",编程将它们按从小到大的顺序排列起来
void zifuchuan(){
    int  j ,k;
    
    char t[81], b[5][10]= {"China","American","Japan","France","Australia"};
    
    for (j=0; j<=6; j++){
        
        for (k=j-1; k<6; k++){
            
            if (strcmp(b[j],b[k])>0)
                
                {
                    strcpy(t , b[j]);strcpy(b[j] , b[k]);
                    
                    strcpy( b[k] ,t);
                }
        }
    }
        for (j=0; j<6; j++)
    printf(" %s\n",b[j]);

}
//20、 编程实现，输入一个平面上的点，判断它是否落在单位圆上，并显示相应的信息。
void text1_2(){
//    float x,y;
//    scanf("%f,%f",&x,&y);
//    if (x*x+y*y<1) {
//        printf("(%.2f,%.2f)在单位圆内\n",x,y);
//    }
//    else if (x*x+y*y==1) {
//        printf("(%.2f,%.2f)在单位圆上\n",x,y);
//    }
//    else
//    {
//        printf("(%.2f,%.2f)不在单位圆内\n",x,y);
//    }
    
    printf("%d\n",strcmp("how","How"));
}