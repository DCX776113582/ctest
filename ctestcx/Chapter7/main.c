//
//  main.c
//  Chapter7——字符串
//
//  Created by mac on 18/1/5.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/*20180105——1、字符串的定义&2、字符串的初始化*/
void test01()
{
    printf("%s\n","GAME START!");//字符串常量
    printf("%c\n",'A');//字符常量
    char game[15]="GAME START!";//字符数组
    char Game[]={'G','A','M','E',' ','S','T','A','R','T','!','\0'};//特殊的字符数组，字符串
    long int size = sizeof(game);
    printf("%s\n%ld\n",game,size);
    //以字符数据输出字符串内容
    for (int i = 0; i<size; ++i) {
        printf("%c",game[i]);
    }
    printf("\n");
    size = sizeof(Game);
    for (int i = 0; i<size; ++i) {
        printf("%c",Game[i]);
    }
    printf("\n");
    scanf("%s",Game);
    size = sizeof(Game);
    printf("%s\n%ld\n",Game,size);
}
void test02()
{
    //常量字符串（只读属性）：使用栈区的指针操作访问
    const char * pstr = "NARUTO 疾风传";//常量指针：指向可以变化，只可以读，不可写
    //栈上的指针变量指向常量字符数组首元素
    printf("%s\n",pstr);
    printf("%c\n",*pstr);
    //    *pstr = 'N';//Error
    //    printf("%s\n",pstr);
    //    printf("%c\n",*pstr);
    for (; *pstr!='\0'; ) {
        printf("%c",*pstr);
        pstr++;
    }
    //    printf("\n");
    for (const char*p = pstr; (*p)!='\0'; ++p) {
        printf("%c",*p);
    }
    printf("\n");
    //可变字符串（读、写）：存储在栈区的字符串数据
    char str[]="NARUTO 疾风传";//字符串定义
    printf("%s\n",str);
    printf("%c\n",*str);
    pstr = str;
    *str = 'n';
    printf("%s\n",pstr);
    printf("%c\n",*pstr);
}
//3、字符串操作函数
unsigned long strlens(const char * s)
{
    unsigned long int i = 0;
    for (const char * p = s; *p!='\0';++p) {
        ++i;
    }
//    const char *p;
//    for (p = s; p!='\0'; ++p) {
//        ;
//    }
    return i;
}
char *strcopy(char *to, const char *from)
{
    char * pstr = to;
    if (to==NULL||from==NULL) {
        return "FLASE1";
    }
    else{
//    while (*from!='\0') {
//        *to = *from;
//        to++;
//        from++;
//    }
//    *to = *from;//先进行判断，再进行赋值
        while ((*to++=*from++)!='\0');//先执行赋值语句，然后进行判断，条件成立，执行空语句，条件不成立，跳出循环。
        return pstr;
    }
}
void test03()
{
    /*    const char *s = "hello";
     strcpy(s, "abcde");//ERROR
     char s[6] = "hello";
     strcpy(s, "abcde");//strcpy是函数拷贝
     printf("%s\n", s);
     */
    const char * pstr = "KARMAN RIDER BUILD!";
    printf("%s\n",pstr);
    printf("%ld字节\n",sizeof("KARMAN RIDER BUILD!"));
    printf("%ld个有效字符\n",strlens(pstr));
    
    char rider[] = "KARMEN RIDER BUILD TANKE&&RABBIT MODE!";
    printf("%s\n",rider);
    printf("%ld字节\n",sizeof(rider));
    printf("%ld个有效字符\n",strlens(rider));
    
    char rd[20],rs[40];
    strcopy(rd, pstr);
    strcopy(rs, rider);
    strcopy(rider, pstr);
    printf("%s\n%s\n%s\n",rider,rd,rs);
    
    char string[80];
    strcopy( string, "Hello world from " );
    strcat( string, "strcpy " );
    strcat( string, "and " );
    strcat( string, "strcat!" );
    printf( "String = %s\n", string);
}
char rider1[]="GAME START!KAIGAN,ORE LET'S GO KAKUgO! GO GO GO GHOST!";
char rider2[]="GAME START!KAIGAN,ORE LET'S GO KAKUgO! GO GO GO GHOST!";
char rider3[]="GAME START!KAIGAN,ORE LET'S GO KAKUGO! GO GO GO GHOST!";
char rider4[]="GAME START!KAIGAN,ORE LET'S GO KAkUGO! GO GO GO GHOST!";
void test04()
{
    char* tmp = (char*)malloc(20*sizeof(char));
    strcmp(rider1, rider2);
    strcmp(rider1, rider3);
    strcmp(rider1, rider4);
    int result[3]={strcmp(rider1, rider2),strcmp(rider1, rider3),strcmp(rider1, rider4)};
    for (int i = 0; i<3; ++i) {
        if (result[i]>0) {
            strcpy(tmp,"greater than");
        }
        else if (result[i]<0)
        {
            strcpy(tmp,"less than");
        }
        else
        {
            strcpy(tmp,"equal to");
        }
        printf( "\tstrcmp: rider1 is %s rider2\n", tmp );
    }
    free(tmp);
    tmp = NULL;
}
//编写一个函数，可以用指针引用的顺序逆序打印一系列数字。
char * ni(char pointer[],char suzu[],unsigned long int n)
{
    char * p = pointer;
    char * q = suzu;
    for (int i = 1; i<=n; ++i) {
        if (pointer[n-i]!='\0') {
            q[i-1] = p[n-i];
        }
    }
    return q;
}
void dao(char *pointer,unsigned long int n)
{
    for (int i = 0; i<=n; ++i) {
        printf("%c",pointer[n-i]);
    }
}
void test05()
{
    char * p = "0123456789";
    char su[11];
    unsigned long int n = strlen(p);
    dao(p, n);
    printf("\n");
    printf("%s\n",(*ni)(p,su,n));
    printf("%s\n",su);
}
/*2、写一个程序，使用函数strcmp比较用户输入的两个字符串。
 程序应该声明第一个字符串是否小于，
 等于或大于第二个字符串的。
 */
void test06()
{
    char string1[10];
    char string2[10];
    printf("please input string1:");
    scanf("%s",string1);
    printf("please input string2:");
    scanf("%s",string2);
    int tmp = strcmp(string1, string2);
    if (tmp>0) {
        printf("string1 > string2\n");
    }
    else if (tmp<0)
    {
        printf("string1 < string2\n");
    }
    else
    {
    printf("string1 == string2\n");
    }
}
/*3、编写一个函数，可以计算字符串的长度。
 然后在main函数中输入一个字符串，然后计算并打印字符串的长度。
 */
int jisu(const char * pointer)
{
    int i = -1;
    while (pointer[++i]!='\0');
    return i;
}
void test07()
{
    char a[] = "jiamianqishi";
    printf("%d\n",jisu(a));
}
/*4、这是一个字符串的N字。
 写一个函数，可以复制从M字符到字符串结束的另一个新的字符串。
 */
char*strq(char *str,int M,char *str1)
{
    char * p = NULL;
    if (M<strlen(str)) {
        p = &str[M];
        for (int i = 0; i<strlen(str1); ++i) {
            str[M++]=str1[i];
        }
    }
    return str;
}
void test08()
{
    char strN[]="KARMEN RIDER OOO!";
    char strM[]="Zero";
        int M;
    printf("请输入键入位置：");
    scanf("%d",&M);
    char * strO = strq(strN, M, strM);
    printf("%s\n",strO);
}
//自定义实现strlen、strcpy、strcat、strcmp四大函数。
unsigned long int Strlen(const char * str)
{
    unsigned long int i = 0;
    while((*str++)!='\0') {
        ++i;
    }
    return i;
}
char * Strcmp(const char * str1,const char * str2)
{
    char * p = NULL;
    while ((*str1++)==(*str2++));
    if (str1>str2) {
        p =  "str1>str2";
    }
    else if (str1==str2)
    {
        p =  "str1=str2";
    }
    else
    {
        p = "str1<str2";
    }
    return p;
}
void delspace(char *t)//35题
{
    int m, n;
    char c[80];
    for(m=0, n=0; t[m]; m++)
        if (!isspace(*(t+m))) /*C语言提供的库函数，用以判断字符是否为空格*/
        {
            c[n]=t[m];
            n++;
        }
    c[n]='\0';
    strcpy(t, c);
}
int count( char *p, char *q)//36题
{
    int m, n, k, num=0;
    for (m=0; p[m]; m++)
        for (n=m, k=0; q[k]==p[n]; k++, n++)
            if(q[k+1]=='\0')
            { num++;  break;}
    return (num);
}
char cchar(char ch)//38题
{
    if (ch>='A' && ch<='Z')  ch=ch-'A'+'a';
    return  ch;
}
void ss( char  *s, char  t)//41题
{
    while (*s)
    {   if (*s==t) *s=t-'a'+'A';
        s++;
    }
}
int findmax( int *a, int n)//42题
{
    int *p, *s;
    for (p=a, s=a; p-a<n; p++)
        if(*p>*s) s=p;
    return (*s);
}
void fun( char *s)//44
{
    char t[10];
    s=t;
    strcpy(t, "example");
}
int *p;
void fun1( int x, int *y)//填空3
{
    int z=4;
    *p=*y+z;
    x=*p-z;
    printf("(2) %d   %d   %d\n", x, *y, *p);
}
void swap(int *a, int *b)//填空7
{
    int *t;
    t=a;
    a=b;
    b=t;
}
void delnum( char *t)//填空9
{
    int m, n;
    for (m=0,n=0; t[m]!='\0';m++)
        if (t[m]<'0'|| t[m]>'9')
        { t[n]=t[m]; n++;}
    else{
        getchar();
         ++n;
    }
}
#define M 10//填空17
void f(char *t, char ch)//填空14
{
    while (*(t++)!='\0');
    while(*(t-1)<ch)
//    *(t--)=*(t-1);
    *(t--)=ch;
}
int strcmp3( char *s, char *t)//选择25
{
    for (;*t==*s ;){
        if (!*t)
        {
            return 0;
        }
        t++;
        s++;
    }
    return (*s-*t);
}
#define N 3
void xiti6()//C语言习题集合(指针)
{
    {
    /*int m=10, n=20;
    char *format="%s, m=%d, n=%d\n";
    m*=n;
    printf(format, "m*=n", m,n);*///21题
    /*char s[20];
    scanf("%s",&s[2]);
    printf("%c\n",s[2]);*///20题
    /*char s[6];
    s="abcd";
    printf("\"%s\"\n", s);*///30题
    /*int a, b, k=4, m=6, *p=&k, *q=&m;
    a=p==&m;
    b=(-*p)/(*q)+7;
    printf("a=%d\n", a);
    printf("b=%d\n", b);*///31题
    /*int j, k=0;
    char s[60], t[100], *p;
    p=s;
    scanf("%s",s);
    while(*p)
    {  for (j=1; j<=3 && *p; p++,k++,j++)  t[k]=*p;
        if ( j==4) { t[k]=' '; k++;}
    }
    t[k]='\0';
    printf("%s\n",t);*///32题
    /*char *t, s[8];
    int n;
    t=s;
    scanf("%s",s);
    n=*t-'0';
    while (*(++t)!= '\0') n=n*8+*t-'0';
    printf("%d\n", n);*///33题
    /*char s[80], *t, max, *w;
    t=s;
    scanf("%s",s);
    max=*(t++);
    while (*t!='\0')
    {
        if (max<*t)
        { max=*t;  w=t; }
        t++;
    }
    t=w;
    while ( t>s)
    {
        *t=*(t-1);
         t--;}
    *t=max;
    printf("%s\n",t);*///34题
    /*char  s[80];
    scanf("%s",s);
    delspace(s);
    printf("%s\n",s);*///35题
    char s[80], sub[80];
    int n;
    gets(s);
    gets(sub);
    printf("%d\n", count(s,sub));//36题
    /*int a[]={1,2,3,4,5,6,7,8,9,0}, *p;
    p=a;
    printf("%d\n", *p+9);*///37题
    /*char s[]="ABC+abc=defDEF", *p=s;
    while(*p)
    {
        *p=cchar(*p);
        p++;
    }
    printf("%s\n",s);*///38题
    /*char b1[8]="abcdefg", b2[8], *pb=b1+3;
    while( --pb>=b1) strcpy(b2, pb);
    printf("%ld\n", strlen(b2));*///39题
    /*char  str1[100]="abcddfefdbd", c='d';
    ss(str1, c);
    printf("%s\n", str1);*///41题
    /*int x[5]={12,21,13,6,18};
    printf("%d\n", findmax(x,5));*///42题
    /*char *q, *p;
    p=(char*) malloc (sizeof(char) *20);    //为指针p分配一个地址
    q=p;
    scanf("%s%s", p, q);
    printf("%s %s\n", p, q);*///43题
    /*char *s;
    fun(s);
    printf("%s\n",s);*///44
    /*char a[10]={9,8,7,6,5,4,3,2,1,0}, *p=a+5;
    printf("%d\n", *--p);*///46
    /*int x=1, y=2, z=3;
    p=&y;
    fun1(x+z, &y);
    printf("(1) %d  %d  %d\n", x, y, *p);*///填空3
    }
    /*char s[80], *t="EXAMPLE";
    t=strcpy(s, t);
    s[0]='e';
    puts(t);*///填空5
    /*int x=3, y=5, *p=&x, *q=&y;
    swap(p,q);
    printf("%d  %d\n", *p, *q);*///填空7
    /*char *p="abcdefgh", *r;
    long *q;
    q=(long *) p;
    q++;
    printf("%s",q);
    r=(char *) q;
    printf("%s\n", r);*///填空8
    /*char *s;
    s=(char *) malloc (sizeof(char));   //给s分配一个地址
    printf("\n input the original string:");
    scanf("%s",s);
    delnum(s);
    puts(s);*///填空9
    /*int a[]={1,2,3,4,5,6,7,8,9,10,11,12}, *p[3], m;
    for ( m=0; m<3; m++) p[m]=&a[m*4];
    printf("%d\n", p[2][2]);*///填空15
    /*char s[]="1357", *t;
    t=s;
    printf("%c, %c\n", *t, ++*t);*///填空16
    /*int a[M], m, n, temp;
    for( m=0; m<M; m++) scanf ("%d", a+m);
    m=0;
    n=M-1;
    while(m<n)
    {
        temp=*(a+m);
        *(a+m) = *(a+n);
        *(a+n)=temp;//(a+n);
        m++;
        n--;
    }
    for (m=0;m<M;m++) printf("%3d", *(a+m));*///填空17
    /*int a[11], x, m;
    printf("please input ten numbers:\n");
    for(m=1;m<11;m++) scanf("%d", a+m);
    printf("please input x:");
    scanf("%d", &x);
    *a=x;
    m=10;
    while (x!=*(a+m))
        m--;
    if (m>0) printf("%5d's position is : %4d\n", x, m);
    else printf("%d not been found!\n", x);*///填空18
    /*char * s[]={ "PASCAL", "FORTRAN", "COBOL", "BASIC"};
    char **p;
    int n;
    p=s;
    for (n=0;n<4;n++)
        printf("%s\n", *(p++));*///填空19
    /*int a[4]={1,2,3,4},*p;
    p=&a[2];
    printf("%d\n",*--p);*///填空20
    /*int b[2][3]={1,3,5,7,9,11};
    int *a[2][3];
    int i,j;
    int **p, m;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            a[i][j]=*(b+i)+j;
    p=a[0];
    for(m=0;m<6;m++)
    {
        printf("%4d", **p);
        p++;
    }*///填空24
    /*char s[]="97531", c;
    c=getchar();
    f(s,c);
    puts(s);*///填空14
    /*char s[80], *t;
    t=s;
    scanf("%s",s);
    while (*(++t)!='\0')
        if (*t=='a') break;
        else { t++;  scanf("%s",t); }
    puts(t);*///填空13
    /*char * s = "karmen";
    char * q = "karmAn";
    int i = strcmp3(s, q);
    printf("%d\n",i);*///选择25
    /*char s[N][81], * t;
    int j;
    for (j=0; j<N; j++)
        gets (s[j]);
    t= *s;
    for (j=1; j<N; j++)
        if (strlen(t)<strlen(s[j]))
            t = s[j];
    printf("the max length of ten strings is: %lu, %s\n", strlen(t), t);*/

}
//测试代码——字符串数组
void test09()
{
    //可变字符串数组
    //    char str1[] = "Super";
    //    char str2[] = "Hero";
    //    char str3[] = "Time!";
    //    char * str[] = {str1,str2,str3};
    //不可变字符串数组
    //    char * str1 = "Super";
    //    char * str2 = "Hero";
    //    char * str3 = "Time!";
    //    char * str[]={str1,str2,str3};
    //    char * str[]={"Super","Hero","Time!"};
    //
    //    for (int i = 0; i<3; ++i) {
    //        printf("%s",str[i]);
    //    }
    //    for (int i = 0; i<3; ++i) {
    //        printf("请输入第%d个新的字符串内容：",i+1);
    //        scanf("%s",str[i]);
    //    }
    //    for (int i = 0; i<3; ++i) {
    //        printf("%s",str[i]);
    //    }
    
    char* pDays[7];
    pDays[0] ="Sunday";
    pDays[1] ="Monday";
    pDays[2] ="Tuesday";
    pDays[3] ="Wednesday";
    pDays[4] ="Thursday";
    pDays[5] ="Friday";
    pDays[6] ="Saturday";
    char **pWalker, **pLast ;
    pLast = &pDays[6];
    for (pWalker = pDays; pWalker <= pLast; pWalker++) {
        //        printf( "%s\n", *pWalker );
        for (int i = 0; i<7; ++i) {
            pWalker = &pDays[i];
            for (int j = 0; j<strlen(pDays[i]); ++j) {
                printf("%c",*(*pWalker+j));
            }
            printf("\n");
        }//循环嵌套
    }
    pWalker--;
    printf( "%p -> %s\n", pWalker, *pWalker );
}
//字符串文件存储操作：数据持久化存储
void test10()
{
    //文件保存：输入（外界键盘/鼠标）——>内存（二进制补码）——>输出（显示器/本地磁盘）
    //步骤：1、打开文件——>2、给文件写入数据——>3、关闭文件
    char filename[10]="file.txt";
    FILE * pf = NULL;//文件指针
    //打开文件
    pf = fopen(filename, "w+");
    //写入数据
    char str[20];//缓存：数据流strem
    if (pf!=NULL) {//scanf（）与gets（char*）
        while ((gets(str)!=NULL)&&(str[0])!='\0') {
            /*fprintf():把内存中的数据打印到指定磁盘文件
            printf():把内存中数据打印显示器
             puts(char*)*/
            fprintf(pf, "%s ",str);
        }
    }
    //文件读取：磁盘（本地文件）——>内存（二进制补码）——>显示器
    //步骤：1、打开文件——>2、从文件读取数据——>3、关闭文件
    puts("File contents:");
    rewind(pf);//回到文件开始处
    //读取数据
    while (fscanf(pf, "%s ",str)!=EOF) {
        printf("%s ",str);
    }
    printf("\n");
    //关闭文件
    fclose(pf);
    pf = NULL;
}
void save()
{
    FILE * fp = NULL;//定义一个文件指针
    fp = fopen("Ginga.txt", "w+");//打开文件
    //给文件写入数据（内存——>文件）：fprintf函数
    char * student[] = {"Name:student01","Age:19","Score:100"};
    if (fp != NULL) {
        printf("文件打开成功！\n");
        //3个数据
        int i = 0;
        while (i<3) {
            fprintf(fp, "%s ",student[i]);
            ++i;
        }
        printf("写入数据成功！\n");
    }
    //关闭文件
    int r = fclose(fp);
    if (0 == r) {
        printf("文件关闭成功！\n");
    }
    fp = NULL;

}
void load()
{
    FILE * fp = NULL;
    //打开文件
    fp = fopen("Ginga.txt", "r");
    //从文件中读取数据（文件——>内存）：fscanf
    if (fp != NULL) {
        puts("文件打开成功");
        char name[20];
        char age[10];
        char score[10];
        char * student[]={name,age,score};
        while (fscanf(fp, "%s",*student)!=EOF) {
            puts(*student);
        }
        puts("读取数据成功!");
    }
    fp = NULL;
}
typedef int (*SU)(int);//自定义函数指针
int sum(int p)//求各位数字之和
{
    int add;
    if (p<10) {
        add = p;
    }
    else
    {
        add = (sum)(p/10)+p%10;//递归调用
    }
    return add;
}
void test11()//测试函数——键盘输入任意正整数，求该各位数字之和
{
    SU su;
    int * p = (int *)malloc(sizeof(int));
    printf("请输入一个正整数：");
    scanf("%d",p);
    su = &sum;
    int sum = (*su)(*p);
    printf("sum = %d\n",sum);
    free(p);
    p = NULL;
}
char * Strcopy(char * strDest,const char * strSrc)//自定义ctrcpy函数
{
    if ((strDest==NULL)||(strSrc==NULL)) {
        return "无法copy";
    }
    else
    {
        char * strDestCopy = strDest;
        while ((*strDest++=*strSrc++)!='\0') {
            ;
        }
        return strDestCopy;
    }
}
void test12()//测试函数——自定义copy函数
{
    char * p = "jiamianqishi";
    char q[20];
    printf("%s\n",Strcopy(q, p));
}
#include "math.h"
void sushu()
{
    int m,i,k,h=0,leap=1;
    printf("\n");
    for(m=101;m<=200;m++)
    {
        k=sqrt(m+1);
        for(i=2;i<=k;i++)
            if(m%i==0)
            {
                leap=0;
                break;
            }
        if(leap)
        {
            printf("%-4d",m);
            h++;
            if(h%10==0)
                printf("\n");
        }
        leap=1;
    }
    printf("\nThe total is %d",h);
}
char* strcat1(char*str,const char*src)
{
    int i = 0;
    while (str[i]!='\0') {
        i++;
    }
    int j = 0;
    while (src[j]!='\0') {
        str[i++] = src[j++];
    }
    str[i+1] = '\0';
    return str;
}
//实现从源字符串string到目的字符串str的复制函数
char* stringCpy(char* str,const char* string)
{
    char* s=str;
    while(*string)
    {
        *s++=*string++;
    }
    *s='\0';
    //返回目的字符串的首地址
    return str;
}

//函数将字符串string链接到字符串str的尾部
char* stringCat(char* str,const char* string)
{
    char* s=str;
    //找到字符串str的尾部
    while(*s)
    {
        s++;
    }
    while(*string)
    {
        *s++=*string++;
    }
    *s='\0';
    //返回目的字符串的首地址
    return str;
}

//比较大小的函数
//实现两个字符串str和string的比较
//如果str小于string返回负值，如果str大于string返回正直，如果str等于string返回0
int stringCmp(const char* str,const char* string)
{
    while((*str)&&(*string)&&(*str==*string))
    {
        str++;
        string++;
    }
    return (int)(*str-*string);
}

void maopao(int array[],int len)//冒泡排序优化
{
    int res = 1;
    int temp = 0;
    for (int i = 0; i<len-1; ++i) {
        res = 1;
        for (int j = 0; j<len-1-i; ++j) {
            if (array[j]>array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                res = 0;
            }
        }
        if (res) {
            return;
        }
    }
}
void test()
{
    char*str = "karmen";
    const char *src = "rider";
    char*p=Strcopy(str,src);
    printf("%s",p);
//    sushu();
}
int main(int argc, const char * argv[]) {
    test();
    return 0;
}
