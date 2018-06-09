//
//  chapter6_20180103.c
//  Chapter6
//
//  Created by mac on 18/1/3.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include "chapter6_20180103.h"
//数组名与指针的理解
void test6_12_01()
{
    int a[5] = {1,2,3,4,5};
    //    int * const pa = a;//const只能在指针变量名（pa）前面加，修饰变量名pa，指向不能再改变
    int * pa = a;//一维数组变量名数据类型可以被当作一级指针使用，只能指向数组中首元素
    //    pa = &a[4];
    printf("&a[0]:%p a:%p pa:%p\n",&a[0],a,pa);//a、pa均指向数组首元素a[0]
    for (int i = 0; i<5; ++i) {//指针变量的下标法
        printf("%d\n",a[i]);//数组名直接访问数组元素
        printf("%d\n",pa[i]);//指针变量名直接访问数组元素
    }
    printf("%d\n",*a);//数组变量名间接访问数组元素
    printf("%d\n",*pa);//指针变量名间接访问数组元素
    
    for (int i = 0; i<5; ++i) {
        printf("%d\n",*&a[i]);//数组名间接访问数组元素
        printf("%d\n",*&pa[i]);//指针变量名间接访问数组元素
    }
}
//访问数组元素的特殊方式
void test6_12_02()
{
    int a[5] = {1,2,3,4,5};
    int * pa = a;                   //指向数组a的首元素
    pa = &a[4];                     //pa指向a[4]
    for (int i = 0; i<5; ++i) {
        printf("%d ",pa[-i]);       //偏移量为负，向前偏移
    }
    printf("\n");
    //指针变量的下标法（访问数组元素）
    for (int i = -4; i<1; ++i) {
        printf("%d ",pa[i]);        //偏移量为正，向后偏移
    }
    printf("\n");
    //指针变量的加减法（访问数组元素）
    for (int i = 0; i<5; ++i) {
        printf("%d ",*(pa-i));
    }
    printf("\n");
    for (int i = 4; i>=0; --i) {
        printf("%d ",*(a+i));
    }
    printf("\n");
    
}
//指针数组：存储地址
void test6_12_03()//Demo06_13
{
    int a[5];// = {2, 4, 6, 8, 22};
    int *b[5]={a,a+1,a+2,a+3,a+4};          //指针数组：存储5个int*类型数据的数组变量b
    //思考题：如何使用scanf通过b来给数组a的元素赋值
    for (int i = 0; i<5; ++i) {
        //        b[i]=&a[i];
        printf("a[%d]:",i);
        scanf("%d",*(b+i));                 //&(*b)[i]、*b+i、b[i]  通过b数组给a数组元素赋值
    }
    //为指针数组赋值
    //    for (int i = 0; i < 5; i++) {
    //        b[i] = a+i;
    //        b[i] = &a[i];
    //        *(b+i) = a+i;
    //        *(b+i) = &a[i];
    //    }
    //通过指针数组打印它所指向变量的地址
    //    for (int i = 0; i < 5; i++)
    //    {
    //        printf("b[%d]:%p\n",i,b[i]);
    //    }
    //通过对指针数组解引用找到对应的值
    for (int i = 0; i < 5; i++) {
        //        printf("%d\n", *(*(b+i)));
        printf("b[%d]=%d\n",i, *(b[i]));    //指针数组所指向的地址解引用，通过b数组访问a元素的值
        //        printf("b[%d]=%d\n",i,*(*b+i));   //*(a+i)
        //        printf("%d\n",(*b)[i]);           //a[i]
        //        printf("%d\n",*(a+i));
        //        printf("a[%d]=%d\n",i,a[i]);
    }
}
//数组指针：指向数组整体的指针变量
void test6_12_04()
{
    int a[5] = {2,4,6,8,22};
    int (*p)[5];//指向数组整体的指针变量p；
    p = &a;//初始化指针，指针变量p指向数组a
    printf("%p %p %p %p\n",p, &a, a, &a[0]);//打印输出初始地址
    //思考题：如何使用scanf通过*p来给数组a的元素赋值
    for (int i = 0; i<5; ++i) {
        printf("a[%d]=",i);
        scanf("%d",*p+i);
    }
    for (int i=0; i<5; i++) {
        printf("%d %d %d\n",a[i],(*p)[i],*(*p+i));
    }
}
void Demo06_14()
{
    char a[8];//定义字符型数组
    int b[8];//定义整型数组
    float c[8];//定义单精度浮点型数组
    char * pa = a+1;//a+1指向a下一个元素，即a+1是下一个元素的地址
    int *pb = b+4;//b+4指向b后面第四个元素，即b+4是后面第四个个元素的地址
    float *pc = c+6;
    printf("%p %p\n",a,pa);
    printf("%p %p\n",b,pb);
    printf("%p %p\n",c,pc);
    printf("%ld %ld %ld\n",pa-a,pb-b,pc-c);//1 4 6
    printf("%ld %ld %ld\n",sizeof(pa-a),sizeof(pb-b),sizeof(pc-c));//8 8 8
    printf("%ld %ld %ld\n",(pa-a)*sizeof(char),(pb-b)*sizeof(int),(pc-c)*sizeof(float));
    //1 16 24
}
