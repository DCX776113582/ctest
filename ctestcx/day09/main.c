//
//  main.c
//  day09
//
//  Created by mac on 17/12/26.
//  Copyright (c) 2017年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include "text.h"
#define PI 3.14//宏定义：执行期间用名称，系统编译器会用文本值替换宏名称（定义发生在预处理阶段）3.14为文本值
//有效值：变量被使用之前赋予的数据；
//无效值：变量使用之后被释放了；变量被声明，未被赋值；
void text01()
{
    //    int a = 511;
    //    int *p = &a;
    //    *p = a;
    //    printf("%d\n",*p);
    //    double *p,x = 0.2345;
    //    p = &x;
    //    printf("%p\n",p);
    //    char s[20];
    //    scanf("%s",s);
    //    printf("%s",s);
    //    char s[6]="abcd";
    //    printf("\"%s\"\n", s);
    int a, b, k=4, m=6, *p=&k, *q=&m;
    a=p==&m;
    b=(-*p)/(*q)+7;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
}
int main(int argc, const char * argv[]) {

    text17();
    

    return 0;
}
