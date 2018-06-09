//
//  test.c
//  Chapter8
//
//  Created by mac on 18/1/12.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "fruitsclub.h"
//自定义枚举类型:元素：必须整型常量表达式;描述周期范围以内
#if 0
enum weekday{Mon = 1,Tue,Wed,Thur,Fri,Sat,Sun};
void test1_01()
{
    //    enum weekday day = Thur;//声明枚举类型变量day
    //    printf("%d\n",day);
    enum weekday day;//声明枚举类型变量day
    printf("请输入你选择的周期时间(1~7):");
    scanf("%d",&day);
    switch (day) {
        case Mon:
            puts("出发");
            break;
        case Tue:
            puts("战队");
            break;
        case Wed:
            puts("银河");
            break;
        case Thur:
            puts("超人");
            break;
        case Fri:
            puts("火焰");
            break;
        case Sat:
            puts("艾克斯");
            break;
        case Sun:
            puts("放假");
            break;
        default:puts("输入错误");
            break;
    }
    
}
typedef int (*FPOINTER)(int, int);
FPOINTER fpointer;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divi(int a, int b)
{
    return a / b;
}
int rem(int a, int b)
{
    return a % b;
}
int result(int(*fp)(int,int),int a,int b)
{
    return (*fp)(a,b);
}
void jisuanqi()
{
    int number1;
    int number2;
    char operator;
    int r = 0;
    printf("请输入两个数据：\n");
    printf("number1:");
    scanf("%d",&number1);
    printf("number2:");
    scanf("%d",&number2);
    printf("请输入两个数据的运算符（+ - * / %%）:");
    getchar();
    scanf("%c",&operator);
    switch (operator) {
        case '+':{
            fpointer = &add;
            r = result(fpointer,number1,number2);
            break;
        }
        case '-':{
            fpointer = &sub;
            r = result(fpointer,number1,number2);
            break;
        }
        case '*':{
            fpointer = &mul;
            r = result(fpointer,number1,number2);
            break;
        }
        case '/':{
            fpointer = &divi;
            r = result(fpointer,number1,number2);
            break;
        }
        case '%':{
            fpointer = &rem;
            r = result(fpointer,number1,number2);
            break;
        }
        default:{
            printf("运算操作符输入无效\n");
            break;
        }
    }
    printf("%d%c%d运算结果为:%d\n",number1,operator,number2,r);
}
enum Rider{Kuuga = 1,Agito,Ruki,Faiz,Blade,Hibiki,Kabuto,Den_o,Kiva,Decade,Double,OOO,Fourze,Wizard,Gaim,Drive,Ghost,EX_Aid,Build};
/*手机超市购买一部手机：iOS商品编号1；Androud商品编号2；Whone商品编号3；Other商品编号4；
 1、9折；2、8折、3、7.5折、4、5折
 一位顾客购买手机：苹果手机：8888；三星手机：7999；诺基亚手机：2888；百度云手机：1999
 要求售货员，在顾客购买商品结算过程中进行运算：顾客消费多少钱？
 输入：商品编号；输入购买手机的数量
 输出：手机的相关信息（手机系统、几部、单价、总价）*/
enum OS{iOS = 1,Androud,Whone,Other};
enum Brand{iphone = 1,samsung,nokia,Baidu_cloud};
void test1()
{
    char * ios = "iOS";
    char * And = "Androud";
    char * Wh = "Whone";
    char * ot = "Other";
    enum Brand brand;
    printf("请输入品牌代码：");
    scanf("%d",&brand);
    int i;
    float sum;
    switch (brand) {
        case iphone:
            printf("请输入个数：");
            int b = 8888;float f = 0.9f;
            scanf("%d",&i);
            sum = i*b*f;
            printf("手机系统：%s\n%d部\n单价%d\n总价为%.2f\n",ios,i,b,sum);
            break;
        case samsung:
            printf("请输入个数：");
            int b2 = 7999;float f2 = 0.8f;
            scanf("%d",&i);
            sum = i*b2*f2;
            printf("手机系统：%s\n%d部\n单价%d\n总价为%.2f\n",And,i,b2,sum);
            break;
        case nokia:
            printf("请输入个数：");
            int b3 = 2888;float f3 = 0.75f;
            scanf("%d",&i);
            sum = i*b3*f3;
            printf("手机系统：%s\n%d部\n单价%d\n总价为%.2f\n",Wh,i,b3,sum);
            break;
        case Baidu_cloud:
            printf("请输入个数：");
            int b4 = 1999;float f4 = 0.5f;
            scanf("%d",&i);
            sum = i*b4*f4;
            printf("手机系统：%s\n%d部\n单价%d\n总价为%.2f\n",ot,i,b4,sum);
            break;
            
        default:puts("输入有误");
            break;
    }
}
void test1_1()
{
    enum OS{iOS = 1,Androud,Whone,Other};
    enum OS myPhone;
    int number;
    const double price[4] = {8888,7999,2888,1999};
    const double discount[4] = {0.9,0.8,0.75,0.5};
    static double sumPrice = 0;
    double myPhonePrice; //总价
    static int count = 1;
    char yes = 'y';
    do{
        puts("手机品牌号码如下");
        puts("1号：苹果手机(iOS)");
        puts("2号：三星手机(Androud)");
        puts("3号：诺基亚手机(Whone)");
        puts("4号：百度云手机(Other)");
        printf("请选择号码：");
        scanf("%d",&myPhone);
        printf("您要买几部：");
        scanf("%d",&number);
        printf("******************购买商品%d信息：******************\n",count);
        printf("手机品牌\t手机系统\t数量\t单价\t\t折扣\t\t总价\n");
        switch (myPhone) {
            case 1:{
                myPhonePrice = price[0]*discount[0]*number;
                printf("苹果手机\tiOS\t\t%2d\t%5.2f\t%5.2f\t%.2f\n",number,price[0],discount[0],myPhonePrice);
                break;
            }
            case 2:{
                myPhonePrice = price[1]*discount[1]*number;
                printf("三星手机 Android %2d %5.2f %5.2f %.2f\n",number,price[1],discount[1],myPhonePrice);
                break;
            }
            case 3:{
                myPhonePrice = price[2]*discount[2]*number;
                printf("诺基亚手机 WPhone %2d %5.2f %5.2f %.2f\n",number,price[2],discount[2],myPhonePrice);
                break;
            }
            case 4:{
                myPhonePrice = price[3]*discount[3]*number;
                printf("百度云手机 Other %2d %5.2f %5.2f %.2f",number,price[3],discount[3],myPhonePrice);
                break;
            }
            default:
                printf("对不起，输入信息错误，此商品不存在！\n");
                break;
        }
        sumPrice+= myPhonePrice;
        myPhonePrice = 0;
        printf("************************************\n");
        printf("购买商品总价为：%.2f\n",sumPrice);
        getchar();
        printf("是否继续购买？(y或按任意键结束):");
        scanf("%c",&yes);
        if (yes == 'Y'||yes == 'y') {
            count++;
        }
        else
        {
            break;
        }
    }while(1);
}
void printstudent(SDU s)
{
    printf("ID:%ld\tNAME:%s\tSCORE:%.2lf\n",s.id,s.name,s.score);
}
void test02()
{
    struct fraction//定义一个结构类型：用于描述分数的信息
    {//元素：成员字段
        int numerator;
        int denominator;
    };
    //1/2
    struct fraction f1 = {1,2};//声明变量f1
    //结构类型变量访问：变量名.成员字段
    printf("%d/%d\n",f1.numerator,f1.denominator);
    //定义一个结构类型：用于描述学生的信息
    SDU s1 = {1001,"sanyuan",99.9};//声明同时初始化
    puts("学生1信息：");
    //    printf("ID:%ld\tNAME:%s\tSCORE:%.2lf\n",s1.id,s1.name,s1.score);
    printstudent(s1);
    SDU s2;//先声明，后初始化，字符串类型需要用字符串函数strcpy
    s2.id = 1002;
    strcpy(s2.name,"kuuga");
    s2.score = 100.00;
    puts("学生2信息：");
    //    printf("ID:%ld\tNAME:%s\tSCORE:%.2lf\n",s2.id,s2.name,s2.score);
    printstudent(s2);
    SDU s3;//先声明，后使用键盘scanf手动初始化
    printf("id:");
    scanf("%ld",&s3.id);
    printf("name:");
    scanf("%s",s3.name);
    printf("score:");
    scanf("%lf",&s3.score);
    puts("学生3信息：");
    //printf("ID:%ld\tNAME:%s\tSCORE:%.2lf\n",s3.id,s3.name,s3.score);
    printstudent(s3);
    
}
//结构类型：描述手机商品信息所包括的所有属性
PHONE p01 = {1,"iOS","苹果手机",8888,0.9,8888*0.9};
PHONE p02 = {2,"Andourd","三星手机",7999,0.8,7999*0.8};
PHONE p03 = {3,"Whone","诺基亚手机",2888,0.75,2888*0.75};
PHONE p04 = {4,"Other","百度云手机",1999,0.5,1999*0.5};
void prt(PHONE s)
{
    printf("%d\t%s\t%s\t%.2lf\t%d\t%.2f\t%.2lf\n",s.ID,s.os,s.brand,s.price,s.i,s.discount,s.total);
}
void test2()
{
    enum OS{iOS = 1,Androud,Whone,Other};//手机系统
    enum OS myPhone;//手机
    int count = 0;//购买总数量
    static double sum = 0;//总价
    double sumall = 0.0;//单次总价
    char yes = 'y';
    const double price[4] = {8888,7999,2888,1999};//价格
    const double dis[4] = {0.9,0.8,0.75,0.5};//折扣
    do{
        puts("手机品牌号码如下");
        puts("1号：苹果手机(iOS)");
        puts("2号：三星手机(Androud)");
        puts("3号：诺基亚手机(Whone)");
        puts("4号：百度云手机(Other)");
        printf("请输入商品编号：");
        scanf("%d",&myPhone);
        switch (myPhone) {
            case iOS:
                printf("请输入商品数量：");
                scanf("%d",&p01.i);
                static int s1 = 0;
                s1+=p01.i;
                p01.i=s1;
                sumall = price[0]*dis[0]*p01.i;
                p01.total=sumall;
                prt(p01);
                break;
            case Androud:
                printf("请输入商品数量：");
                scanf("%d",&p02.i);
                static int s2 = 0;
                s2+=p02.i;
                p02.i=s2;
                sumall = price[1]*dis[1]*p02.i;
                p02.total=sumall;
                prt(p02);
                break;
            case Whone:
                printf("请输入商品数量：");
                scanf("%d",&p03.i);
                static int s3 = 0;
                s3+=p03.i;
                p03.i=s3;
                sumall = price[2]*dis[2]*p03.i;
                p03.total=sumall;
                prt(p03);
                break;
            case Other:
                printf("请输入商品数量：");
                scanf("%d",&p04.i);
                static int s4 = 0;
                s4+=p04.i;
                p04.i=s4;
                sumall = price[3]*dis[3]*p04.i;
                p04.total=sumall;
                prt(p04);
                break;
            default:puts("输入有误");
                break;
        }
        
        sum+= sumall;
        sumall = 0;
        getchar();
        printf("是否继续购买？(y或按任意键结束):");
        scanf("%c",&yes);
        if (yes == 'Y'||yes == 'y') {
            count = p01.i+p02.i+p03.i+p04.i;
        }
        else
        {
            count = p01.i+p02.i+p03.i+p04.i;
            break;
        }
    }while (1);
    printf("******************购买商品信息：******************\n");
    puts("手机编号\t手机系统\t手机品牌\t单价\t数量\t\t折扣\t\t总价");
    prt(p01);
    prt(p02);
    prt(p03);
    prt(p04);
    printf("*************************************************\n");
    printf("共购买%d部手机\n购买商品总价为：%.2f\n",count,sum);
}
void test3()
{
    int a[3];
    printf("%p\n",&a[0]);
    printf("%p\n",a);
    printf("%p\n",&a);
    
    PHONE s;
    printf("%p\n",&s);
    printf("%p\n",&s.ID);
    
    PHONE * q;//结构体指针类型
    q = &p02;//间接访问：解引用
    //    printf("%s\n",q->brand);
    //    printf("%s\n",(*q).brand);
    //    p2 = p3;//结构体变量的赋值
    memcpy(&p01, &p02, sizeof(PHONE));//内存拷贝
    prt(p01);
    prt(p02);
    //    STU stu1 = {1, 2, 3.0};
    //    STU *p = &stu1;
    //    printf("%p, %p, %p, %p\n", &stu1.a, &stu1.b, &stu1.c, p);
    //    printf("%d, %d, %lf\n", stu1.a, stu1.b, stu1.c);
    //    printf("%d, %d, %lf\n", (*p).a, (*p).b, (*p).c);
    //    printf("%d, %d, %lf\n", p->a, p->b, p->c);
}

/*************************************************************************************
 *  1、整体结构中最大成员数据类型与系统中默认对齐模数较小的作为整体对齐系数进行比较；
 *  2、从结构类型中每个成员进行对齐比较：按照当前成员数据类型与设置默认对齐模数较小的值作为对齐系数进行比
 *     较（为它整数倍）
 *  3、结构体整体检查：各成员所占内存总和（包括中间所插入补充内存），应该为1步骤中较小对齐系数的整数倍即
 *     可（否则，补齐）
 ************************************************************************************/
void test03()
{
    typedef union
    {
        char a[10]; //10
        char a1;
        char c;     //1
        int b;      //4
        int g;
        double d;   //8
    } Mo;
    Mo q;
    Mo * p = &q;
    q.b = 4;
    printf("%d\n",p->b);
    strcpy(q.a, "kai!jjjq");
    printf("%s\n",p->a);
    q.c = 'K';
    printf("%c\n",p->c);
    printf("%s\n",p->a);
}
void test4()
{
    typedef union {
        short value;
        char c;
    }Test;
    Test t;
    t.value = 0x1234;
    printf("%p\n",&t.value);
    printf("%c\n",t.c);
    if (t.c == 0x12)
    {
        printf("大端机\n");//低地址端存放的是0x12（高位字节）
    }else if(t.c == 0x34)
    {
        printf("小端机\n");//低地址端存放的是0x34（低位字节）
    }
}
/*1）使用一个枚举类型，表达：北京、上海、广州三个城市，
 然后输出他们的值。
 */
void test_1()
{
    typedef enum {Beijing = 1,Shanghai,guangzhou} PLACE;
    printf("%d %d %d\n",Beijing,Shanghai,guangzhou);
}
/*2）在C语言程序中没有明确的数据类型来表示真（非0的数据）、假（为0的数据）、
 和不确定的关系。
 编写一个逻辑程序：
 请自定义一个枚举类型来表示：
 真（TRUE）=1、
 假（FALSE）=0、
 不确定(UNCERTAIN)=-1
 的三种关系；
 并通过简单输入数据的判断来使用该枚举类型声明的变量。
 */
void test_2()
{
    typedef enum {不确定UNCERTAIN=-1,假FALSE, 真TRUE} ERL;
    ERL t;
    printf("请输入一个整型数据：");
    scanf("%d",&t);
    if (1==t) {
        printf("%d\n",真TRUE);
    }
    else if (0==t)
    {
        printf("%d\n",假FALSE);
    }
    else if(-1==t)
    {
        printf("%d\n",不确定UNCERTAIN);
    }
    else
    {puts("出错");}
}
/*3）定义枚举类型来表示Student_Info的操作类型：
 包括ADD（添加）、MODIFIED（修改）、SEARCH（查询）、DELETE（删除）、PRINT（打印）；
 实现菜单式的项目程序；
 通过键盘输入方式来选择操作：
 例如：输入 1 提示“添加成功！”
 输入 2 提示“修改成功！”
 输入 3 提示“查询成功！”
 输入 4 提示“删除成功！”
 输入 5 提示“打印成功！”
 输入 0 提示“操作错误！”
 */
void test_3()
{
    typedef enum {ADD添加=1,MODIFIED修改,SEARCH查询,DELETE删除,PRINT打印} Student_Info;
    Student_Info t;
    printf("请输入：");
    scanf("%d",&t);
    switch (t) {
        case ADD添加:
            puts("添加成功！");
            break;
        case MODIFIED修改:
            puts("修改成功！");
            break;
        case SEARCH查询:
            puts("查询成功！");
            break;
        case DELETE删除:
            puts("删除成功！");
            break;
        case PRINT打印:
            puts("打印成功！");
            break;
        default:
            if (0==t) {
                puts("操作错误！");
            }
            break;
    }
}
/*4）一家水果店出售4种水果，每千克价格分别是：
 苹果1.15元，桔子1.20元，香蕉0.95元，菠萝0.85元。
 编一程序使售货员主要从键盘上打入货品的代码及重量；
 计算机将显示货品名、单价、重量及总价。
 货品代码为苹果1，桔子2，香蕉3，菠萝4。
 （大家试着编写一下这个程序）
 提示：
 CONST PA=1.15；PO=1.20；PB=0.95；PP=0.85；
 TYPE FRUITTYPE =（APPLE，ORANGE，BANANA，PINEAPPLE）；
 */
void test_4()
{
    typedef enum {苹果=1,桔子,香蕉,菠萝} FRUITS;
    const double PA=1.15,PO=1.20,PB=0.95,PP=0.85;
    char * p[]={"苹果","桔子","香蕉","菠萝"};
    char * p1[]={"APPLE","ORANGE","BANANA","PINEAPPLE"};
    int i;
    double t,sum;
    double total1 = 0,total2 = 0,total3 = 0,total4 = 0;
    double t1,t2,t3,t4;
    char yes = 'y';
    do{printf("请输入代码：");
        scanf("%d",&i);
        printf("请输入重量：");
        scanf("%lf",&t);
        switch (i) {
            case 苹果:
                total1 = PA * t;
                t1+=t;
                break;
            case 桔子:
                total2 = PO * t;
                t2+=t;
                break;
            case 香蕉:
                total3 = PB * t;
                t3+=t;
                break;
            case 菠萝:
                total4 = PP * t;
                t4+=t;
                break;
            default:
                break;
        }
        getchar();
        printf("是否继续购买？(y或按任意键结束):");
        scanf("%c",&yes);
        if (yes == 'Y'||yes == 'y') {
            continue;
        }
        else
        {
            break;
        }
        
    }while(1);
    puts("货品名\t单价(¥/kg)\t\t重量(kg)\t\t总价(¥)");
    puts("goods\tprice(¥/kg)\tWight(kg)\tTotal(¥)");
    printf("%s\t\t%.2lf\t%.2lf\t%.2lf\n",p[0],PA,t1,total1);
    printf("%s\t%.2lf\t%.2lf\t%.2lf\n",p1[0],PA,t1,total1);
    printf("%s\t\t%.2lf\t%.2lf\t%.2lf\n",p[1],PO,t2,total2);
    printf("%s\t%.2lf\t%.2lf\t%.2lf\n",p1[1],PO,t2,total2);
    printf("%s\t\t%.2lf\t%.2lf\t%.2lf\n",p[2],PB,t3,total3);
    printf("%s\t%.2lf\t%.2lf\t%.2lf\n",p1[2],PB,t3,total3);
    printf("%s\t\t%.2lf\t%.2lf\t%.2lf\n",p[3],PP,t4,total4);
    printf("%s %.2lf\t%.2lf\t%.2lf\n",p1[3],PP,t4,total4);
    sum = total1+total2+total3+total4;
    printf("购买商品总价为：%.2f\n",sum);
    
    
    
}
/*有十个学生。每个学生都有一个身份证，
 三个班级的名字和分数。
 写一个函数来打印分数的平均值，
 成绩为1的学生的数据。
 */
SDU students[10];
double aver(double scores)
{
    return scores/10;
}
void test_5()
{
    char * Name[] = {"kuuga","agito","ruki","faiz","blade","hibiki","kabuto","den_o","kiva","decade"};
    int id[10]={2001,2002,2003,2004,2005,2006,2007,2008,2009,2010};
    double average = 0;
    double ave;
    for (int i = 0; i<10; ++i) {
        strcpy(students[i].name,Name[i]);
        students[i].id = id[i];
        printf("第%d个学生的成绩：",i+1);
        scanf("%lf",&students[i].score);
        average+=students[i].score;
    }
    ave = aver(average);
    for (int i = 0; i<10; ++i) {
        printf("%s\t%ld\t%lf\n",students[i].name,students[i].id,students[i].score);
    }
    printf("average = %lf\n",ave);
    SDU max;
    max = students[0];
    printf("NO.1:\n");
    for (int i = 1; i<10; ++i) {
        if (max.score<=students[i].score) {
            SDU     is;
            is = students[i];
            students[i] = max;
            max = is;
            printf("%s\t%ld\t%lf\n",max.name,max.id,max.score);
        }
    }
}
/*定义一个包含年份、月份和日的参数的结构。
 然后写一个函数，可以计算一年中一天的数量，在结构中。*/
void test_6()
{
    enum MONTH{January = 1,February,March,April,May,June,July,August,September,October,November,December};
    typedef  struct{
        int year;
        int month;
        int day;
        int days;
    }DAY;
    DAY days;
    DAY * p = &days;
    int i;
    printf("请输入年份：");
    scanf("%d",&p->year);
    printf("请输入月份：");
    scanf("%d",&p->month);
    printf("请输入天数：");
    scanf("%d",&p->day);
    if(p->day<=31){
        if ((p->year%400==0)||((p->year%4==0)&&(p->year%100!=0))) {
            i = 29;
            puts("闰年");
        }
        else{
            i = 28;
            puts("平年");
        }
        switch (p->month) {
            case January:
                p->days = p->day;
                break;
            case February:
                p->days = p->day+31;
                break;
            case March:
                p->days = p->day+i+31;
                break;
            case April:
                p->days = p->day+i+31*2;
                break;
            case May:
                p->days = p->day+i+31*2+30;
                break;
            case June:
                p->days = p->day+i+31*3+30;
                break;
            case July:
                p->days = p->day+i+31*3+30*2;
                break;
            case August:
                p->days = p->day+i+31*4+30*2;
                break;
            case September:
                p->days = p->day+i+31*5+30*2;
                break;
            case October:
                p->days = p->day+i+31*5+30*3;
                break;
            case November:
                p->days = p->day+i+31*6+30*3;
                break;
            case December:
                p->days = p->day+i+31*6+30*4;
                break;
            default:puts("错误！");
                break;
        }
    }
    printf("今天是第%d天\n",p->days);
}
#endif
