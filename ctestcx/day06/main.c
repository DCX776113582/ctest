//
//  main.c
//  day06
//
//  Created by mac on 17/12/19.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //switch……case的使用，计算某年某月某日在一年中的第几天
//    int day,month,year,sum,leap;
//    printf("请输入年、月、日：");
//    scanf("%d,%d,%d",&year,&month,&day);
//    switch (month)
//    {
//        case 1:sum = 0;break;
//        case 2:sum = 31;break;
//        case 3:sum = 59;break;
//        case 4:sum = 90;break;
//        case 5:sum = 120;break;
//        case 6:sum = 151;break;
//        case 7:sum = 181;break;
//        case 8:sum = 212;break;
//        case 9:sum = 243;break;
//        case 10:sum = 273;break;
//        case 11:sum = 304;break;
//        case 12:sum = 334;break;
//        default:printf("数据错误！\n");break;
//    }
//    sum = sum + day;
//    if ((year%400==0)&&(year%4==0||year%100!=0))
//    {
//        leap = 1;
//    }
//    else
//    {
//        leap = 0;
//    }
//    if (1==leap && month>2)
//    {
//        sum++;
//    }
//    printf("这一年的今天为第%d天。\n",sum);
    
//    for (int i = 1; i<=5; i++)
//    {
//        printf("第%d次理发\n",i);
//    }
//    int sum = 0;
//    for (int a = 1; a<=100; a++) {
//        sum=a+sum;
//        printf("\t%d",sum);
//    }
    //判断水仙花数
//    int a,b,c,d,num;
//    printf("水仙花数是：");
//    for (num = 100; num < 10000; num++)
//    {
//        d = num/1000;
//        a = num%1000/100;            //分解出百位数
//        b = num%100/10;          //分解出十位数
//        c = num%10;             //分解出个位数
//        if (num==a*a*a+b*b*b+c*c*c+d*d*d)/*水仙花数等于个位数的立
//                                          方加十位数的立方加百位数的立方*/
//        {
//            printf("%-5d",num);
//        }
//    }
    //判断是否为素数
    int i,s=0;
    printf("请输入一个数：");
    scanf("%d",&i);
    for (int k = 2;k<i; k++)
    {
        if (i%k==0) {
            s=1;
        }
    }
    if (s==1) {
        printf("%d不是素数\n",i);
    } else {
        printf("%d是素数\n",i);
    }
    //输出100以内能被3整除的数
//    for (int i = 1;i<100;i++)
//    {
//        if (i%3==0) {
//            printf("%5d",i);
//        }
//    }
    //输出100以内的素数
//    int i,j;
//    for(i=2;i<=100;i++)
//    {
//        int t=1;
//        for(j=2;j<i;j++)
//        {
//            if(i%j==0)
//            {
//                t=0;
//                break;
//            }
//        }
//        if(t==1)
//            printf("%d是素数\t",i);
//        else
//            printf("%d不是素数\n",i);
//    }
    //输出100以内整数和
//    int sum = 0;
//    for (int i = 1; i<=100; i++)
//    {
//        sum = sum + i;
//    }
//    printf("sum = %d\n",sum);
    //输出九九乘法表
//    int a,b,ji;
//    for (a = 1; a<10; a++) {
//        for (b=1; b<=a; b++) {
//            ji = a*b;
//            printf("%d*%d=%d  ",a,b,ji);
//        }
//        printf("\n");
//    }
    
//    a = 1;
//    while (a<=9) {
//        b = 1;
//        while (b<=9) {
//            ji = a * b;
//            printf("%d*%d=%d\t",a,b,ji);
//            b++;
//        }
//        a++;
//    }
    
//    a = 1;
//    b = 1;
//    do {
//        do {
//            ji = a * b;
//            printf("%d*%d=%d\t",a,b,ji);
//            b++;
//        } while (b <= 9);
//        a++;
//    } while (a<=9);
    
    //输出100以内能被3整除的数(while)
//    int i = 1;
//    while(i<100)
//    {
//        if (i%3==0) {
//            printf("%5d",i);
//        }
//        i++;
//    }
    //求a+aa+aaa+……+aa……aa的和
//    int a,n,count = 1;
//    long int sn = 0,tn = 0;
//    printf("请输入a和n的值：");
//    scanf("%d,%d",&a,&n);
//    printf("a = %d,b = %d\n",a,n);
//    while (count<=n) {
//        tn = tn + a;
//        a = a * 10;
//        sn = sn + tn;
//        ++count;
//    }
//    printf("a+aa+aaa+……=%ld\n",sn);
    //输入正整数，一直到输入负整数停止
//    int zzs = 0;
//    do {
//        printf("输入一个正整数：");
//        scanf("%d",&zzs);
//    } while (zzs>=0);
    //用循环嵌套输出图案
//    int n;
//    scanf("%d",&n);
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = n; j >= i; j--)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
    //输出菱形
//    int i,j,k;
//    for(i=0;i<=5;i++)
//    {
//        for(j=0;j<=4-i;j++)
//        printf(" ");
//        for(k=0;k<=2*i;k++)
//        printf("*");
//    printf("\n");
//    }
//    for(i=0;i<=8;i++)
//    {
//        for(j=0;j<=i;j++)
//        printf(" ");
//        for(k=0;k<=8-2*i;k++)
//        printf("*");
//    printf("\n");
//    }
    //+、-、*、/、%计算器
//    int a,b;char k;
//    printf("请输入数据：");
//    scanf("%d%c%d",&a,&k,&b);
//    switch (k) {
//        case '+':
//            printf("a = %d,b = %d\n%d+%d=%d\n",a,b,a,b,a+b);
//            break;
//        case '-':
//            printf("a = %d,b = %d\n%d-%d=%d\n",a,b,a,b,a-b);
//            break;
//        case '*':
//            printf("a = %d,b = %d\n%d*%d=%d\n",a,b,a,b,a*b);
//            break;
//        case '/':
//            printf("a = %d,b = %d\n%d/%d=%d\n",a,b,a,b,a/b);
//            break;
//        case '%':
//            printf("a = %d,b = %d\n余数为：%d\n",a,b,a%b);
//            break;
//        default:printf("错误！\n");
//            break;
//    }
    //九九乘法表
//    int x,y,z;
//        for (y = 1; y<10; y++) {
//            for (x=1; x<=y; x++) {
//                z = x*y;
//                printf("\t%dx%d=%d",y,x,z);
//            }
//            printf("\n");
//        }
//    int o,p,q,w;
//    for (o = 1; o<=9; o++) {
//        for (p = ; p>=1; p--) {
//            printf(" ");
//        }
//        for (q=1; q<=o; q++) {
//            w = o*q;
//            printf("\t%dx%d=%d",o,q,w);
//
//        }
//        printf("\n");
//    }
    //输出菱形
//    int i,j,k;
//    for (i = 0; i<=4; i++) {
//        for (j = 0; j<=4-i; j++)
//        {printf(" ");}
//        for (k = 0; k<=2*i; k++)
//        {printf("*");}
//        printf("\n");
//    }
//    for (i = 3; i>=0; i--) {
//        for (j= 4; j>=i; j--)
//        {printf(" ");}
//        for (k=2*i; k>=0; k--)
//        {printf("*");}
//        printf("\n");
//    }
    
//    int M=1,N=2;
//    int array[M][N];
//    int i,j;
//    int small=0;
//    int count = 0;
//    printf("Please input a %d*%d Inteage array:\n",M,N);
//    
//    for(i=0;i<M;i++)
//    {
//        for(j=0;j<N;j++)
//        {
//            scanf("%d",&array[i][j]);
//            if (i==j==0) {
//                small = array[i][j];
//            }
//            
//            printf("array[%d][%d] = %d\n",i,j,array[i][j]);
//            count++;
//            if(count % N == 0)
//            {
//                printf("\n");
//            }
//            if(small >= array[i][j])
//            {
//                small = array[i][j];
//            }
//        }
//    }
//    printf("The min of array is:%d\n",small);
//    int k;
//    char d,s;
//    scanf("%d,%c,%c",&k,&d,&s);
//    for (int i = 0; i<=k; i++) {
//        for (int j = 0; j<=k-i; j++) {printf("%c",s);}
//        for (int w = 0; w<=i; w++) {printf("5⃣️");}
//        for (int q = 0; q<=k-i; q++) {printf("%c",d);}
//        
//        for (int j = 0; j<=k-i; j++) {printf("%c",s);}
//        for (int w = 0; w<=i; w++) {printf("5⃣️");}
//        for (int q = 0; q<=k-i; q++) {printf("%c",d);}
//        
//        for (int j = 0; j<=k-i; j++) {printf("♂");}
//        for (int w = 0; w<=i; w++) {printf("5⃣️");}
//        for (int q = k-i; q>=0; q--) {printf("*");}
//
//        printf("\n");
//    }
//    for (int i = k-1; i>=0; i--) {
//        for (int j = 0; j<=k-i; j++) {printf("♂");}
//        for (int w = 0; w<=i; w++) {printf("5⃣️");}
//        for (int q = k-i; q>=0; q--) {printf("*");}
//        
//        for (int j = 0; j<=k-i; j++) {printf("♂");}
//        for (int w = 0; w<=i; w++) {printf("5⃣️");}
//        for (int q = k-i; q>=0; q--) {printf("*");}
//        
//        for (int j = 0; j<=k-i; j++) {printf("%c",s);}
//        for (int w = 0; w<=i; w++) {printf("5⃣️");}
//        for (int q = 0; q<=k-i; q++) {printf("%c",d);}
//
//        printf("\n");
//    }
    //输出正方形及其衍生图形
//    for (int i = 1; i <= 4; i++) {
//        for (int j = 1; j <= 4; j++) {
//            printf("♂ ");                 //输出4个“♂ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♀ ");                 //输出4个“♀ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("🔥 ");                //输出4个“🔥 ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♀ ");                 //输出4个“♀ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♂ ");                 //输出4个“♂ ”
//        }
//        printf("\n");
//    }
//    for (int i = 1; i <= 4; i++) {
//        for (int j = 1; j <= 4; j++) {
//            printf("♀ ");                 //输出4个“♀ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♂ ");                 //输出4个“♂ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("🔥 ");                //输出4个“🔥 ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♂ ");                 //输出4个“♂ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♀ ");                 //输出4个“♀ ”
//        }
//        printf("\n");
//    }
//    for (int i = 1; i <= 4; i++) {
//        for (int j = 1; j <= 4; j++) {
//            printf("♂ ");                 //输出4个“♂ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♀ ");                 //输出4个“♀ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("🔥 ");                //输出4个“🔥 ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("  ");                 //输出8个空格
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♀ ");                 //输出4个“♀ ”
//        }
//        for (int k = 1; k<=4; k++) {
//            printf("♂ ");                 //输出4个“♂ ”
//        }
//        printf("\n");
//    }
    //输出不能被3整除的数
//    for (int i = 1; i<10; i++) {
//        int j = 3;
//        if (i%j==0) {
//            continue;           //结束本次循环，开始下次循环
//        }
//        printf("%d ",i);
//    }
//    printf("\n");
//
//    int i;
//    for ( i = 1; i<10; i++) {
//        if (i%3==0) {
//            break;             //终止并跳出break所在的循环，不再开始新的循环
//        }
//        printf("%d ",i);
//    }
//    printf("i = %d",i);
//    printf("\n");
    
//    for (int i = 1; i<=9; i++) {
//        for (int j = 1; j<=i; j++) {
//            if (j==1) {continue;}
//        printf("\t%dx%d=%d",i,j,i*j);
//        }
//        printf("\n");
//        if (i==7) {break;}
//    }
    
//    int i;
//    int sum = 0;
//    long int aer = 1;
//    printf("请输入数据：");
//    scanf("%d",&i);
//    for (int j = 1; ; j++) {
//        if (j == i) {
//            break;
//        }
//        sum = sum + j;
//    }
//    for (int j = 1;j<= i ; j++) {
//
//        aer = aer*j;
//    }
//    printf("和为：%d\n积为：%ld\n",sum,aer);
    
//    int i,j,n;
//    printf("请输入一个数据：");
//    scanf("%d",&n);
//    for (i = 2; i<=n; i++) {
//        for (j = 2; j<=i-1; j++){
//            if (i%j==0)
//            break;
//        }
//        if (j==i)
//        printf("%d,",i);
//    }
    
//    int i,j,k,l;
//    for (i = 1; i<=4; i++) {
//        j=1;
//        while (j<=4) {
//            printf("* ");
//            j++;
//        }
//        printf("\n");
//    }
//    k=1;
//    do {
//        l=1;
//        do {
//            printf("💧");
//            l++;
//        } while (l<=4);
//        k++;
//        printf("\n");
//    } while (k<=4);
//    if (i==5) {
//        printf("nice drive\n");
//    }
//    if (k==3) {
//        printf("ok\n");
//    } else {
//        printf("hello\n");
//    }
//    int num;
//    printf("请输入你的幸运数：1~3\n");
//    scanf("%d",&num);
//    switch (num) {
//        case 1:
//            printf("天气很好\n");
//            break;
//        case 2:
//            printf("晴转多云\n");
//            break;
//        case 3:
//            printf("雨夹雪\n");
//            break;
//        default:printf("输入错误\n");
//            break;
//    }
    return 0;
}











