//
//  Rider_Information.c
//  HeroGame
//
//  Created by mac on 18/1/19.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include "Rider_Information.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//骑士
RDM * head;
int n;
void CreatRiderInformatin(RDM * p)//创建
{
    head = NULL;
    int i = 0;
    RDM * new;
    printf("请输入骑士个数：");
    scanf("%d",&n);
    while (i<n) {
        new = (RDM*)malloc(sizeof(RDM));//申请
        new->pNEXT = head;//链接
        head = new;//更新头结点
        ++i;
    }
    p = head;
    for (int i = 0; p!=NULL; ++i) {
        printf("请输入第%d个假面骑士的信息：\n",i+1);
        //初始化数据域
        printf("ID:");
        scanf("%ld",&p->ID);
        printf("Name:");
        scanf("%s",p->Name);
        printf("Year:");
        scanf("%d",&p->year);
        p = p->pNEXT;
    }
}
void PrintRiderInformatin(RDM * p)//打印
{
    printf("共%d个假面骑士的信息\n",n);
    while (p!=NULL) {
        printf("%ld\t%s\t%d\n",p->ID,p->Name,p->year);
        p=p->pNEXT;
    }
}
void FreeRiderInformatin()//释放
{
    while (head!=NULL) {
        RDM * s = head;
        head = s->pNEXT;
        free(s);//释放
        s = NULL;
    }
    if (head==NULL) {
        puts("链表释放成功！无内存问题！");
    }
}
void SaveRiderInformatin(RDM * p)//保存
{
    FILE*fp=NULL;
    fp = fopen("RiderInformation.txt", "w");
    if (fp!=NULL) {
        puts("打开文件成功！");
        fprintf(fp, "已存有假面骑士的信息有%d条\n",n);
        for (int i = 0; i<n; ++i) {
            fprintf(fp, "%ld\t%s\t%d\n",p->ID,p->Name,p->year);
            p=p->pNEXT;
        }
    }
    int cl = fclose(fp);
    if (0==cl) {
        puts("关闭文件成功！");
        fp = NULL;
    }
    else
    {
        puts("关闭失败！");
    }
}
void LoadRiderInformatin(RDM * p)//读取
{
    FILE*fp=NULL;
    fp = fopen("RiderInformation.txt", "r");
    if (fp!=NULL) {
        puts("打开文件成功！");
        char mat[30];
        RDM rid;
        RDM *new,*s = NULL;
        int count;
        fscanf(fp, "%s",mat);
        printf("%s\n",mat);
        if (p!=NULL) {
            FreeRiderInformatin();
        }
        while (fscanf(fp, "%ld%s%d",&rid.ID,rid.Name,&rid.year)!=EOF) {
            count++;
            new = (RDM*)malloc(sizeof(RDM));
            *new =rid;
            if (1==count) {//固定头结点
                p = new;
            }
            else
            {
                s->pNEXT = new;//链接
            }
            s=new;//跟踪尾结点（更新尾结点）
            new->pNEXT=NULL;//尾结点后继置空
            head=p;
            n = count;
        }
    }
    int cl = fclose(fp);
    if (0==cl) {
        puts("关闭文件成功！");
        fp = NULL;
    }
    else
    {
        puts("关闭失败！");
    }
}
void DeleteRiderInformatin(RDM * p)//删除
{
    int find=0;
    if (p==NULL) {//链表为空
        puts("链表为空！");
    }
    else
    {//链表不为空
        long id;
        printf("请输入要删除的骑士ID：");
        scanf("%ld",&id);
        RDM * s = p;//搜索指针
        //情况一:头结点
        if(id == s->ID){
            printf("%ld\t%s\t%d\n",s->ID,s->Name,s->year);
            find = 1;
            head = head->pNEXT;
            free(s);
            s = NULL;
            n--;
        }
        else
        {//情况二:非头结点
            while (NULL!=s&&NULL!=s->pNEXT) {
                if (id == s->pNEXT->ID) {//若存在，则打印本条信息
                    printf("%ld\t%s\t%d\n",s->pNEXT->ID,s->pNEXT->Name,s->pNEXT->year);
                    find = 1;
                    //删除，建立链接
                    RDM * t = s->pNEXT;//标记被删除的结点
                    s->pNEXT = t->pNEXT;//建立新的链接
                    free(t);            //释放被标记的结点
                    t = NULL;
                    n--;
                }
                s = s->pNEXT;//向后搜索
            }
        }
    }
    if (1 == find) {
        puts("删除成功！");
    }
    else
    {
        puts("删除失败，不存在此数据！");
    }
}
void InsretRiderInformatin(RDM * p)//插入，添加
{
    if(head==NULL) {//链表为空
        puts("链表为空！");
    }
    else
    {//链表不为空
        puts("请选择要插入的方式：1、首部插入、2、指定位置处插入、3、尾部插入");
        int c;
        scanf("%d",&c);
        switch (c) {
            case 1:
            {
                puts("你选择的是首部插入数据，请输入：");
                //创建链表
                RDM* new = (RDM*)malloc(sizeof(RDM));//申请
                new->pNEXT = p;//链接
                p = new;//更新头结点
                head = p;
                //初始化数据域
                printf("ID:");
                scanf("%ld",&new->ID);
                printf("Name:");
                scanf("%s",new->Name);
                printf("Year:");
                scanf("%d",&new->year);
                break;
            }
            case 2:
            {
                puts("你选择的是指定位置插入数据，请输入要插入的具体位置：");
                int index;
            loop:
                scanf("%d",&index);//2(第一个元素的后面进行插入)
                if(index>1&&index<=n)
                {
                    int i = 1;
                    RDM * s = p;
                    while (i<index-1) {
                        s=s->pNEXT;//s指向当前位置的前一个元素（上一个结点）
                        i++;
                    }
                    RDM* new = (RDM*)malloc(sizeof(RDM));//申请
                    new->pNEXT = s->pNEXT;//链接
                    s->pNEXT = new;//更新结点
                    //初始化数据域
                    printf("ID:");
                    scanf("%ld",&new->ID);
                    printf("Name:");
                    scanf("%s",new->Name);
                    printf("Year:");
                    scanf("%d",&new->year);
                }
                else
                {
                    printf("重新输入：");
                    goto loop;
                }
                break;
            }
            case 3:
            {
                puts("你选择的是尾部插入数据，请输入：");
                RDM * s = p;
                while (s->pNEXT!=NULL) {
                    s=s->pNEXT;
                }
                RDM* new = (RDM*)malloc(sizeof(RDM));//申请
                new->pNEXT = s->pNEXT;//链接
                s->pNEXT = new;//更新尾结点
                //初始化数据域
                printf("ID:");
                scanf("%ld",&new->ID);
                printf("Name:");
                scanf("%s",new->Name);
                printf("Year:");
                scanf("%d",&new->year);
                break;
            }
            default:
                break;
        }
        n++;
        PrintRiderInformatin(p);
    }
}
void SearchRiderInformatin(RDM * p)//查寻
{
    int find=0;
    if (p==NULL) {//链表为空
        puts("链表为空！");
    }
    else
    {//链表不为空
        puts("1、ID查寻  2、骑士名查寻  3、播放年查寻");
        int choose;
        RDM * s = p;
        printf("请选择：");
        scanf("%d",&choose);
        switch (choose) {
            case 1:{
                long id;
                printf("请输入要查寻的ID号码：");
                scanf("%ld",&id);
                while (NULL!=s) {
                    if (id == s->ID) {
                        printf("%ld\t%s\t%d\n",s->ID,s->Name,s->year);
                        find = 1;
                    }
                    s = s->pNEXT;
                }
            }
                break;
            case 2:{
                char name[10];
                printf("请输入要查寻的骑士名：");
                scanf("%s",name);
                while (NULL!=s) {
                    if (strcmp(name, s->Name)==0) {
                        printf("%ld\t%s\t%d\n",s->ID,s->Name,s->year);
                        find = 1;
                    }
                     s = s->pNEXT;
                }
            }
                break;
            case 3:{
                int ye;
                printf("请输入要查寻的骑士的播放年：");
                scanf("%d",&ye);
                while (NULL!=s) {
                    if (ye == s->year) {
                        printf("%ld\t%s\t%d\n",s->ID,s->Name,s->year);
                        find = 1;
                    }
                    s = s->pNEXT;
                }
            }
                break;
            default:puts("出错！");
                break;
        }
    }
    if (1 == find) {
        puts("查找成功！");
    }
    else
    {
        puts("查找失败，不存在此数据！");
    }

}
void InverseRiderInformatin(RDM * p)//逆置
{
    RDM*p1=NULL;//标记被逆
    RDM*p2=NULL;//标记即将被逆
    p1 = p;
    p = NULL;
    while (p1!=NULL) {
        p2 = p1->pNEXT;
        p1->pNEXT=p;
        p=p1;
        p1=p2;
    }
    head = p;
    PrintRiderInformatin(head);
}
void exchange(RDM*p1,RDM*q)
{
    RDM chae;
    chae.ID = p1->ID;
    p1->ID = q->ID;
    q->ID = chae.ID;
    //交换数据域NAME
    strcpy(chae.Name, p1->Name);
    strcpy(p1->Name, q->Name);
    strcpy(q->Name, chae.Name);
    //交换数据域AGE
    chae.year = p1->year;
    p1->year = q->year;
    q->year = chae.year;
}
void sortlinkRiderInformatin(RDM*p)//排序
{
    if(p!=NULL && p->pNEXT!=NULL) {
        int choose;
        puts("请选择排序方法：1、NAME  2、ID  3、YEAR");
        scanf("%d",&choose);
        switch (choose) {
            case 1:
                for (int i = 0; i<n-1; ++i) {
                    RDM*p1,*q;
                    p1= p;
                    q=p->pNEXT;
                    for (int j = 0; j<n-1-i; ++j) {
                        if (strcmp(p1->Name, q->Name)>0) {//比较排序交换
                            //交换数据域ID
                            exchange(p1, q);
                        }
                        p1=p1->pNEXT;
                        q=q->pNEXT;
                    }
                }
                break;
            case 2:
                for (int i = 0; i<n-1; ++i) {
                    RDM*p1,*q;
                    p1= p;
                    q=p->pNEXT;
                    for (int j = 0; j<n-1-i; ++j) {
                        if (p1->ID>q->ID) {//比较排序交换
                            //交换数据域ID
                            exchange(p1, q);
                        }
                        p1=p1->pNEXT;
                        q=q->pNEXT;
                    }
                }
                break;
            case 3:
                for (int i = 0; i<n-1; ++i) {
                    RDM*p1,*q;
                    p1= p;
                    q=p->pNEXT;
                    for (int j = 0; j<n-1-i; ++j) {
                        if (p1->year>q->year) {//比较排序交换
                            //交换数据域ID
                            exchange(p1, q);
                        }
                        p1=p1->pNEXT;
                        q=q->pNEXT;
                    }
                }
                break;
            default:puts("错误！");
                break;
        }
    }
    else
    {
        puts("条件不足，无法比较！");
    }
}
void ModifyRiderInformatin(RDM*p)//修改
{
    int i;
    puts("您的RiderInformatin如下：");
    puts("RIDER-ID\tRIDER-NAME\tRIDER-YEAR");
    for (i=0; p!=NULL; i++) {
        printf("%ld\t%s\t\t%d\n",p->ID,p->Name,p->year);
        p = p->pNEXT;
    }
    RDM *s=head;
    int j,k,find=0;
    long l;
    char nam[10];
loop:
    puts("\t1:RIDER-ID\t2:RIDER-NAME\t3:RIDER-YEAR");
    printf("请选择修改方式：");
    scanf("%d",&k);
    switch (k) {
        case 1:{
            printf("请输入修改前的RIDER-ID：");
            scanf("%ld",&l);
            while (NULL!=s) {
                if (l == s->ID) {
                    printf("%ld\t%s\t%d\n",s->ID,s->Name,s->year);
                    printf("请输入修改后的RIDER-ID：");
                    long t;
                    scanf("%ld",&t);
                    s->ID=t;
                    find = 1;
                    break;
                }
                s = s->pNEXT;
            }
            break;}
        case 2:{
            printf("请输入修改前的RIDER-NAME：");
            scanf("%s",nam);
            while (NULL!=s) {
                if (strcmp(nam, s->Name)==0) {
                    printf("%ld\t%s\t%d\n",s->ID,s->Name,s->year);
                    printf("请输入修改后的RIDER-NAME：");
                    char t[10];
                    scanf("%s",t);
                    strcpy(s->Name, t);
                    find = 1;
                    break;
                }
                s = s->pNEXT;
            }
            break;}
        case 3:{
            printf("请输入修改前的RIDER-YEAR：");
            scanf("%d",&j);
            while (NULL!=s) {
                if (j == s->year) {
                    printf("%ld\t%s\t%d\n",s->ID,s->Name,s->year);
                    printf("请输入修改后的RIDER-YEAR：");
                    int t;
                    scanf("%d",&t);
                    s->year=t;
                    find = 1;
                    break;
                }
                s = s->pNEXT;
            }
            break;}
        default:puts("错误,重新输入！");
            goto loop;
            break;
    }
    if (1 == find) {
        puts("修改成功！");
    }
    else
    {
        puts("修改失败，不存在此数据！");
    }
}
//超级战队
SET * sentaihead;
int sentaiN;
int shu;
void CreatSentaiInformatin(SET * p)//创建
{
    sentaihead = NULL;
    int i = 0;
    SET * s = sentaihead;
    SET * NEW;
    printf("请输入战队个数：");
    scanf("%d",&sentaiN);
    printf("请输入战队成员数：");
    scanf("%d",&shu);
    while (i<shu) {
        NEW = (SET*)malloc(sizeof(SET));
        if(0==i)
        {
            sentaihead = NEW;
        }
        else
        {
            s->Pnext = NEW;
        }
        s = NEW;
        NEW->Pnext=NULL;
        i++;
    }
    p = sentaihead;
    for (int i = 0; p!=NULL; ++i) {
        printf("请输入第%d个战队成员的信息：\n",i+1);
        //初始化数据域
        chushihua(p);
        p = p->Pnext;
    }
}
void PrintSentaiInformatin(SET * p)//打印
{
    printf("共%d支超级战队,%d个战队成员信息：\n",sentaiN,shu);
    puts("ID\tSENTAI-ID\tNAME\tCOLOR\tYEAR");
    while (p!=NULL) {
        printf("%ld\t%ld\t%s\t%s\t%d\n",p->ID,p->SentaiID,p->NAME,p->color,p->year);
        p=p->Pnext;
    }
}
void SaveSentaiInformatin(SET* p)//保存
{
    FILE*fp=NULL;
    fp = fopen("SentaiInformation.txt", "w");
    if (fp!=NULL) {
        puts("打开文件成功！");
        fprintf(fp, "已存有%d支超级战队的信息共有%d条\n",sentaiN,shu);
        for (int i = 0; i<sentaiN; ++i) {
            fprintf(fp, "%ld\t%ld\t%s\t%s\t%d\n",p->ID,p->SentaiID,p->NAME,p->color,p->year);
            p=p->Pnext;
        }
    }
    int cl = fclose(fp);
    if (0==cl) {
        puts("关闭文件成功！");
        fp = NULL;
    }
    else
    {
        puts("关闭失败！");
    }
}
void LoadSentaiInformatin(SET * p)//读取
{
    FILE*fp=NULL;
    fp = fopen("SentaiInformation.txt", "r");
    if (fp!=NULL) {
        puts("打开文件成功！");
        char mat[50];
        SET rid;
        SET *new,*s = NULL;
        int count=0;
        fscanf(fp, "%s",mat);
        printf("%s\n",mat);
        if (p!=NULL) {
            FreeSentaiInformatin();
        }
        while (fscanf(fp, "%ld%ld%s%s%d",&rid.ID,&rid.SentaiID,rid.NAME,rid.color,&rid.year)!=EOF) {
            count++;
            new = (SET*)malloc(sizeof(SET));
            *new =rid;
            if (1==count) {//固定头结点
                p = new;
            }
            else
            {
                s->Pnext = new;//链接
            }
            s=new;//跟踪尾结点（更新尾结点）
            new->Pnext=NULL;//尾结点后继置空
            sentaihead=p;
            shu = count;
        }
    }
    int cl = fclose(fp);
    if (0==cl) {
        puts("关闭文件成功！");
        fp = NULL;
    }
    else
    {
        puts("关闭失败！");
    }
}
void DeleteSentaiInformatin(SET * p)//删除
{
    int find=0;
    if (p==NULL) {//链表为空
        puts("链表为空！");
    }
    else
    {//链表不为空
        long id;
        printf("请输入要删除的战队成员ID：");
        scanf("%ld",&id);
        SET * s = p;//搜索指针
        //情况一:头结点
        if(id == s->ID){
            printf("%ld\t%ld\t%s\t%s\t%d\n",p->ID,p->SentaiID,p->NAME,p->color,p->year);
            find = 1;
            sentaihead = sentaihead->Pnext;
            free(s);
            s = NULL;
            shu--;
        }
        else
        {//情况二:非头结点
            while (NULL!=s&&NULL!=s->Pnext) {
                if (id == s->Pnext->ID) {//若存在，则打印本条信息
                    printf("%ld\t%ld\t%s\t%s\t%d\n",p->ID,p->SentaiID,p->NAME,p->color,p->year);
                    find = 1;
                    //删除，建立链接
                    SET * t = s->Pnext;//标记被删除的结点
                    s->Pnext = t->Pnext;//建立新的链接
                    free(t);            //释放被标记的结点
                    t = NULL;
                    shu--;
                }
                s = s->Pnext;//向后搜索
            }
        }
    }
    if (1 == find) {
        puts("删除成功！");
    }
    else
    {
        puts("删除失败，不存在此数据！");
    }
}
void chushihua(SET*new)
{
    printf("ID:");
    scanf("%ld",&new->ID);
    printf("SENTAI-ID:");
    scanf("%ld",&new->SentaiID);
    printf("Name:");
    scanf("%s",new->NAME);
    printf("Color:");
    scanf("%s",new->color);
    printf("Year:");
    scanf("%d",&new->year);

}
void InsretSentaiInformatin(SET * p)//插入，添加
{
    if(sentaihead==NULL) {//链表为空
        puts("链表为空！");
    }
    else
    {//链表不为空
        puts("请选择要插入的方式：1、首部插入、2、指定位置处插入、3、尾部插入");
        int c;
        scanf("%d",&c);
        switch (c) {
            case 1:
            {
                puts("你选择的是首部插入数据，请输入：");
                //创建链表
                SET* new = (SET*)malloc(sizeof(SET));//申请
                new->Pnext = p;//链接
                p = new;//更新头结点
                sentaihead = p;
                //初始化数据域
                chushihua(new);
                break;
            }
            case 2:
            {
                puts("你选择的是指定位置插入数据，请输入要插入的具体位置：");
                int index;
            loop:
                scanf("%d",&index);//2(第一个元素的后面进行插入)
                if(index>1&&index<=n)
                {
                    int i = 1;
                    SET * s = p;
                    while (i<index-1) {
                        s=s->Pnext;//s指向当前位置的前一个元素（上一个结点）
                        i++;
                    }
                    SET* new = (SET*)malloc(sizeof(SET));//申请
                    new->Pnext = s->Pnext;//链接
                    s->Pnext = new;//更新结点
                    //初始化数据域
                    chushihua(new);
                }
                else
                {
                    printf("重新输入：");
                    goto loop;
                }
                break;
            }
            case 3:
            {
                puts("你选择的是尾部插入数据，请输入：");
                SET * s = p;
                while (s->Pnext!=NULL) {
                    s=s->Pnext;
                }
                SET* new = (SET*)malloc(sizeof(SET));//申请
                new->Pnext = s->Pnext;//链接
                s->Pnext = new;//更新尾结点
                //初始化数据域
                chushihua(new);
                break;
            }
            default:
                break;
        }
        shu++;
        PrintSentaiInformatin(p);
    }
}
void SearchSentaiInformatin(SET * p)//查寻
{
    int find=0;
    if (p==NULL) {//链表为空
        puts("链表为空！");
    }
    else
    {//链表不为空
        puts("1、ID查寻  2、战队成员名查寻  3、播放年查寻");
        int choose;
        SET * s = p;
        printf("请选择：");
        scanf("%d",&choose);
        switch (choose) {
            case 1:{
                long id;
                printf("请输入要查寻的ID号码：");
                scanf("%ld",&id);
                while (NULL!=s) {
                    if (id == s->ID) {
                        printf("%ld\t%ld\t%s\t%s\t%d\n",s->ID,s->SentaiID,s->NAME,s->color,s->year);
                        find = 1;
                    }
                    s = s->Pnext;
                }
            }
                break;
            case 2:{
                char name[10];
                printf("请输入要查寻的骑士名：");
                scanf("%s",name);
                while (NULL!=s) {
                    if (strcmp(name, s->NAME)==0) {
                        printf("%ld\t%ld\t%s\t%s\t%d\n",s->ID,s->SentaiID,s->NAME,s->color,s->year);
                        find = 1;
                    }
                    s = s->Pnext;
                }
            }
                break;
            case 3:{
                int ye;
                printf("请输入要查寻的骑士的播放年：");
                scanf("%d",&ye);
                while (NULL!=s) {
                    if (ye == s->year) {
                        printf("%ld\t%ld\t%s\t%s\t%d\n",s->ID,s->SentaiID,s->NAME,s->color,s->year);
                        find = 1;
                    }
                    s = s->Pnext;
                }
            }
                break;
            default:puts("出错！");
                break;
        }
    }
    if (1 == find) {
        puts("查找成功！");
    }
    else
    {
        puts("查找失败，不存在此数据！");
    }
}
void InverseSentaiInformatin(SET * p)//逆置
{
    SET*p1=NULL;//标记被逆
    SET*p2=NULL;//标记即将被逆
    p1 = p;
    p = NULL;
    while (p1!=NULL) {
        p2 = p1->Pnext;
        p1->Pnext=p;
        p=p1;
        p1=p2;
    }
    sentaihead = p;
    PrintSentaiInformatin(sentaihead);
}
void FreeSentaiInformatin()//释放
{
    while (sentaihead!=NULL) {
        SET * s = sentaihead;
        sentaihead = s->Pnext;
        free(s);//释放
        s = NULL;

    }
    if (sentaihead==NULL) {
        puts("释放完成，可以退出");
    }
}
void swap(SET*p1,SET*q)
{
    SET chae;
    chae.ID = p1->ID;
    p1->ID = q->ID;
    q->ID = chae.ID;
    
    chae.SentaiID = p1->SentaiID;
    p1->SentaiID = q->SentaiID;
    q->SentaiID = chae.SentaiID;
    
    //交换数据域NAME
    strcpy(chae.NAME, p1->NAME);
    strcpy(p1->NAME, q->NAME);
    strcpy(q->NAME, chae.NAME);
    
    strcpy(chae.color, p1->color);
    strcpy(p1->color, q->color);
    strcpy(q->color, chae.color);
    
    //交换数据域year
    chae.year = p1->year;
    p1->year = q->year;
    q->year = chae.year;
}
void sortlinkSentaiInformatin(SET*p)//冒泡排序
{
    if(p!=NULL && p->Pnext!=NULL) {
        int choose;
        puts("请选择排序方法：1、NAME  2、ID  3、YEAR");
        scanf("%d",&choose);
        switch (choose) {
            case 1:
                for (int i = 0; i<shu-1; ++i) {
                    SET*p1,*q;
                    p1= p;
                    q=p->Pnext;
                    for (int j = 0; j<shu-1-i; ++j) {
                        if (strcmp(p1->NAME, q->NAME)>0) {//比较排序交换
                            //交换数据域ID
                            swap(p1,q);
                        }
                        p1=p1->Pnext;
                        q=q->Pnext;
                    }
                }
                break;
            case 2:
                for (int i = 0; i<shu-1; ++i) {
                    SET*p1,*q;
                    p1= p;
                    q=p->Pnext;
                    for (int j = 0; j<shu-1-i; ++j) {
                        if (p1->ID>q->ID) {//比较排序交换
                            swap(p1,q);
                        }
                        p1=p1->Pnext;
                        q=q->Pnext;
                    }
                }
                break;
            case 3:
                for (int i = 0; i<shu-1; ++i) {
                    SET*p1,*q;
                    p1= p;
                    q=p->Pnext;
                    for (int j = 0; j<shu-1-i; ++j) {
                        if (p1->year>q->year) {//比较排序交换
                            swap(p1,q);
                        }
                        p1=p1->Pnext;
                        q=q->Pnext;
                    }
                }
                break;
            default:puts("错误！");
                break;
        }
    }
    else
    {
        puts("条件不足，无法比较！");
    }
}
void sortlinkSentaiX(SET*p)
{
    if (p!=NULL&&p->Pnext!=NULL) {
        int choose;
        puts("请选择排序方法：1、NAME  2、ID  3、YEAR");
        scanf("%d",&choose);
        switch (choose) {
            case 1:
                for (int i = 1; i<shu; ++i) {
                    SET*p1,*q;
                    p1= p;
                    q=p->Pnext;
                    for (int j = i+1; j<shu; ++j) {
                        if (strcmp(p1->NAME, q->NAME)>0) {//比较排序交换
                            //交换数据域ID
                            swap(p1,q);
                        }
                        p1=p1->Pnext;
                        q=q->Pnext;
                    }
                }
                break;
            case 2:
                for (int i = 1; i<shu; ++i) {
                    SET*p1,*q;
                    p1= p;
                    q=p->Pnext;
                    for (int j = i+1; j<shu; ++j) {
                        if (p1->ID>q->ID) {//比较排序交换
                            swap(p1,q);
                        }
                        p1=p1->Pnext;
                        q=q->Pnext;
                    }
                }
                break;
            case 3:
                for (int i = 1; i<shu; ++i) {
                    SET*p1,*q;
                    p1= p;
                    q=p->Pnext;
                    for (int j = i+1; j<shu; ++j) {
                        if (p1->year>q->year) {//比较排序交换
                            swap(p1,q);
                        }
                        p1=p1->Pnext;
                        q=q->Pnext;
                    }
                }
                break;
            default:puts("错误！");
                break;
        }
    }
    else
    {
        puts("条件不足，无法比较！");
    }
}
void ModifySentaiInformatin(SET*p)//修改
{
    int i;
    puts("您的SentaiInformatin如下：");
    puts("ID\tsentaiID\tNAME\tColor\tRIDER-YEAR");
    for (i=0; p!=NULL; i++) {
        printf("%ld\t%ld\t%s\t%s\t%d\n",p->ID,p->SentaiID,p->NAME,p->color,p->year);
        p=p->Pnext;
    }
    SET *s=sentaihead;
    int j,k,find=0;
    long l;
    char nam[10];
loop:
    puts("\t1:ID\t2:NAME\t3:ALL");
    printf("请选择修改方式：");
    scanf("%d",&k);
    switch (k) {
        case 1:{
            printf("请输入修改前的ID：");
            scanf("%ld",&l);
            while (NULL!=s) {
                if (l == s->ID) {
                    printf("%ld\t%ld\t%s\t%s\t%d\n",s->ID,s->SentaiID,s->NAME,s->color,s->year);
                    printf("请输入修改后的ID：");
                    long t;
                    scanf("%ld",&t);
                    s->ID=t;
                    find = 1;
                    break;
                }
                s = s->Pnext;
            }
            break;}
        case 2:{
            printf("请输入修改前的NAME：");
            scanf("%s",nam);
            while (NULL!=s) {
                if (strcmp(nam, s->NAME)==0) {
                    printf("%ld\t%ld\t%s\t%s\t%d\n",s->ID,s->SentaiID,s->NAME,s->color,s->year);

                    printf("请输入修改后的NAME：");
                    char t[10];
                    scanf("%s",t);
                    strcpy(s->NAME, t);
                    find = 1;
                    break;
                }
                s = s->Pnext;
            }
            break;}
        case 3:{
            printf("请输入修改前的一条主要信息：");
            long lj;
            scanf("%ld",&lj);
            while (NULL!=s) {
                if (j == s->ID) {
                    printf("%ld\t%ld\t%s\t%s\t%d\n",s->ID,s->SentaiID,s->NAME,s->color,s->year);
                    printf("请输入修改后的信息：");
                    SET new;
                    printf("ID:");
                    scanf("%ld",&new.ID);
                    printf("SENTAI-ID:");
                    scanf("%ld",&new.SentaiID);
                    printf("Name:");
                    scanf("%s",new.NAME);
                    printf("Color:");
                    scanf("%s",new.color);
                    printf("Year:");
                    scanf("%d",&new.year);
                    s->ID = new.ID;
                    s->SentaiID=new.SentaiID;
                    strcpy(s->NAME, new.NAME);
                    strcpy(s->color, new.color);
                    s->year=new.year;
                    find = 1;
                    break;
                }
                s = s->Pnext;
            }
            break;}
        default:puts("错误,重新输入！");
            goto loop;
            break;
    }
    if (1 == find) {
        puts("修改成功！");
    }
    else
    {
        puts("修改失败，不存在此数据！");
    }
}
