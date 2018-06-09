//
//  fruitsclub.c
//  Chapter8
//
//  Created by mac on 18/1/11.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include "fruitsclub.h"
#include <string.h>
#include <stdlib.h>
#pragma pack(4)//设置 内存对齐 模数
char * p[]={"苹果","桔子","香蕉","菠萝"};
char * p1[]={"APPLE","ORANGE","BANANA","PINEAPPLE"};
double total1 = 0,total2 = 0,total3 = 0,total4 = 0;
double t,sum=0;
double t1,t2,t3,t4;
double zt1=100,zt2=100,zt3=100,zt4=100;
FRU* Add(void)
{
    int i;
    static int count=0;
    puts("水果种类：1、苹果  2、桔子  3、香蕉  4、菠萝");
    printf("请输入代码：");
    scanf("%d",&i);
    printf("请输入重量：");
    scanf("%lf",&t);
    FRU * q = MALLOC(t, FRU);
    switch (i) {
        case 苹果:
            q->ID=++count;
            strcpy(q->name1, p[0]);
            q->price=PA;
            total1 += PA * t;
            t1=t;
            q->wight=t1;
            q->toal=total1;
            break;
        case 桔子:
            q->ID=++count;
            strcpy(q->name1, p[1]);
            q->price=PO;
            total2 += PO * t;
            t2=t;
            q->wight=t2;
            q->toal=total2;
            break;
        case 香蕉:
            q->ID=++count;
            strcpy(q->name1, p[2]);
            q->price=PB;
            total3 += PB * t;
            t3=t;
            q->wight=t3;
            q->toal=total3;
            break;
        case 菠萝:
            q->ID=++count;
            strcpy(q->name1, p[3]);
            q->price=PP;
            total4 += PP * t;
            t4=t;
            q->wight=t4;
            q->toal=total4;
            break;
        default:puts("stop!");
            break;
        }
    return q;
}
void MODIFIED(FRU *q[])
{
    int i;
    sum=0;
    puts("您的购买清单如下：");
    puts("序列号\t货品名\t单价(¥/kg)\t\t重量(kg)\t\t总价(¥)");
    for (i=0; q[i]!=NULL; i++) {
//        q[i]->ID=count+1;
        printf("%d\t%s\t\t%.2lf\t%.2lf\t%.2lf\n",q[i]->ID,q[i]->name1,q[i]->price,q[i]->wight,q[i]->toal);
        sum += q[i]->toal;
        }
    printf("购买商品总价为：%.2f\n",sum);
    int j;
    printf("请输入修改序号：");
    scanf("%d",&j);
    printf("请输入修改的重量(kg)：");
    scanf("%lf",&t);
    if (q[j-1]!=NULL) {
        q[j-1]->wight=t;
        q[j-1]->toal=q[j-1]->price*t;
    }
}
void SEARCH(FRU *q[])
{
    sum=0;
    puts("您的购物清单如下：");
    puts("序列号\t货品名\t单价(¥/kg)\t\t重量(kg)\t\t总价(¥)");
    for (int i=0; q[i]!=NULL; i++) {
//        q[i]->ID+=count+1;
        printf("%d\t%s\t\t%.2lf\t%.2lf\t%.2lf\n",q[i]->ID,q[i]->name1,q[i]->price,q[i]->wight,q[i]->toal);
        sum += q[i]->toal;
    }
    printf("购买商品总价为：%.2f\n",sum);
}
void DELETE(FRU *p[])
{
    int find = 0; //假设没找到
    int searcher;
    printf("请输入您要删除的商品编号：");
    scanf("%d",&searcher);
    int i;
    for (i=0; p[i]!=NULL; ++i) {
        if (searcher == p[i]->ID) {
            find = 1; //找到了
            printf("此商品在购物清单中存在！信息如下：\n");
            //打印清单
            printf(NG);
            printf("%d\t%s\t%5.2lf %5.2lf %5.2lf\n",p[i]->ID,p[i]->name1,p[i]->price,p[i]->wight,p[i]->toal);
            //2、存在——删除信息（先堆内存释放，全局数组中的指针删除）
            //2.1 :删除堆内存
            FREE(p[i]);//0
            //2.2 : 后面元素向前移动
            while ((p[i]=p[i+1])!=NULL) {
                i++;
            }
        }
    }
    //不存在——不用删除
    if (0 == find ) {
        printf("此商品不在购物清单，不存在，修改失败！\n");
    }
}
void PRINT(FRU *q[])
{
    int i;
    sum = 0;
    puts("序列号\t货品名\t单价(¥/kg)\t\t重量(kg)\t\t总价(¥)");
    for ( i=0; q[i]!=NULL; i++) {
    printf("%d\t%s\t\t%.2lf\t%.2lf\t%.2lf\n",q[i]->ID,q[i]->name1,q[i]->price,q[i]->wight,q[i]->toal);
        sum += q[i]->toal;
    }
    printf("购买商品总价为：%.2f\n",sum);
}
void save(FRU* q[])
{
    FILE * fp = NULL;//定义一个文件指针
    fp = fopen("Ginga.txt", "w");//打开文件
    //给文件写入数据（内存——>文件）：fprintf函数
    if (fp != NULL) {
        puts("文件打开成功！");
        fprintf(fp,"序列号\t货品名\t单价(¥/kg)\t\t重量(kg)\t\t总价(¥)\n");
        for (int i = 0; q[i]!=NULL; i++) {
            fprintf(fp,"%d\t%s\t\t%.2lf\t%.2lf\t%.2lf\n",q[i]->ID,q[i]->name1,q[i]->price,q[i]->wight,q[i]->toal);
        }
        fprintf(fp, "购买商品总价为：%.2f\n",sum);
        printf("写入数据成功！\n");
    }
    //关闭文件
    int r = fclose(fp);
    if (0 == r) {
        printf("文件关闭成功！\n");
    }
    fp = NULL;
}
FRU pp[10];
void load()
{
    FILE * fp = NULL;
    //打开文件
    fp = fopen("Ginga.txt", "r");
    //从文件中读取数据（文件——>内存）：fscanf
    int y=0;
    if (fp != NULL) {
        puts("文件打开成功");
        if (fscanf(fp,NG)!=EOF) {
            puts(NG);
            for (int i = 0; ; ++i) {
                if(fscanf(fp, "%d %s %lf %lf %lf",&pp[i].ID,pp[i].name1,&pp[i].price,&pp[i].wight,&pp[i].toal)==0)
                {
                    break;
                }
                ++y;
            }
            for (int i=0; i<y; ++i) {
                printf("%d\t%s\t\t%.2lf\t%.2lf\t%.2lf\n",pp[i].ID,pp[i].name1,pp[i].price,pp[i].wight,pp[i].toal);
            }
        }
        fscanf(fp, "购买商品总价为：%lf",&sum);
        printf("购买商品总价为：%.2lf\n",sum);
        puts("读取数据成功!");
    }
    fclose(fp);
    fp = NULL;
}
void EXIT(FRU* p[])
{
    for (int i = 0; p[i]!=NULL; ++i) {
        FREE(p[i]);
    }
}
