//
//  Rider.c
//  HeroGame
//
//  Created by mac on 18/1/15.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include "Rider.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "choose.h"
//Kuuga的变身模式
void Kuuga()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    getchar();
    scanf("%c",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        puts("开始变身吧，请选择变身模式!");
        puts("1、基本模式  2、升华模式  3、究极模式");
        const char * mosi = "代码错误，返回模式选择。\n";
        int moshi;
        scanf("%d",&moshi);
        switch (moshi)
        {
            case 1:
                puts("请选择初始形态！");
                printf("A：初生形态\nB：全能形态\nC：青龙形态\nD：天马形态\nE：泰坦形态\n");
                char form;
                scanf("%s",&form);
                switch (form)
            {
                case 'A':
                    printf("%s初生形态，各项能力只比人类形态强百分之五十，%s",JI,LUTU);
                    puts("GAME START");
                    puts("请选择攻击模式：1、拳击    2、骑士踢   3、绝技");
                    int att;
                    scanf("%d",&att);
                    switch (att) {
                        case 1:
                            for (int puch = 0; puch<=5; puch++) {
                                printf("ha 怒气值加%d",puch+1);
                                printf("\n");}
                            int k = 5;
                            for (int i = 0; i<=k; i++) {
                                for (int j = k-i; j>=0; j--)
                                    printf(" ");
                                for (int a = i; a>=0; a-- )
                                    printf("🔥");
                                printf("\n");
                                
                            }
                            printf("\n");
                            break;
                        case 2:
                            for (int kick = 0; kick<=3; kick++) {
                                printf("sia 怒气值加%d",kick+1);
                                printf("\n");}
                            int ki = 3;
                            for (int i = 0; i<=ki; i++) {
                                for (int j = ki-i; j>=0; j--)
                                    printf(" ");
                                for (int a = i; a>=0; a-- )
                                    printf("🔥");
                                printf("\n");
                            }
                            break;
                        case 3:
                            for (int jueji = 0; jueji<=10; jueji++) {
                                printf("决定了，你的命运 怒气值加%d",jueji+1);
                                printf("\n");}
                            int k1 = 10;
                            for (int i = 0; i<=k1; i++) {
                                for (int j = k1-i; j>=0; j--)
                                    printf(" ");
                                for (int a = i; a>=0; a-- )
                                    printf("🔥");
                                printf("\n");
                            }
                            for (int i = k1-1; i>=0; i--) {
                                for (int j = k1-i; j>=0; j--)
                                    printf(" ");
                                for (int a = i; a>=0; a-- )
                                    printf("🔥");
                                printf("\n");
                            }
                            
                            break;
                        default:printf("错误\n");
                            break;
                    }
                    break;
                case 'B':
                    printf("%s全能形态，各项能力比人类形态强百分之一百，%s\n",JI,LUTU);
                    printf("GAME START\n");
                    printf("请选择攻击模式：1、拳击    2、骑士踢   3、绝技\n");
                    int at;
                    scanf("%d",&at);
                    switch (at) {
                        case 1:
                            for (int puch = 0; puch<10; puch++) {
                                printf("ha 怒气值加5");
                                printf("\n");}
                            break;
                        case 2:
                            for (int kick = 0; kick<12; kick++) {
                                printf("sia 怒气值加10");
                                printf("\n");}
                            break;
                        case 3:
                            for (int jueji = 0; jueji<20; jueji++) {
                                printf("决定了，你的命运 怒气值加20");
                                printf("\n");}
                            break;
                        default:printf("错误\n");
                            break;
                    }
                    
                    break;
                case 'C':
                    printf("%s青龙形态，跳跃能力比人类形态强百分之二百，比全能形态强百分之百，其他能力为全能形态的百分之五十。%s\n",JI,LUTU);
                    break;
                case 'D':
                    printf("%s天马形态，视力比人类形态强百分之三百，比全能形态强百分之二百，其他能力为全能形态的百分之八十。%s\n",JI,LUTU);
                    break;
                case 'E':
                    printf("%s泰坦形态，力量比人类形态强百分之三百五十，比全能形态强百分之二百，其他能力为全能形态的百分之六十。%s\n",JI,LUTU);
                    break;
                default:puts(mosi);
                    break;
            }
                break;
            case 2:
                printf("请选择升华形态！\n");
                printf("A：升华全能形态\nB：升华青龙形态\nC：升华天马形态\nD：升华泰坦形态\nE：惊异全能形态\n");
                char form1;
                scanf("%s",&form1);
                switch (form1)
            {
                case 'A':
                    printf("%s升华全能形态，各项能力强过您的全能形态百分之百，%s\n",JI1,LUTU);
                    break;
                case 'B':
                    printf("%s升华青龙形态，各项能力强过您的青龙形态百分之一百五十，%s\n",JI1,LUTU);
                    break;
                case 'C':
                    printf("%s升华天马形态，各项能力强过您的全能形态百分之一百六十，%s\n",JI1,LUTU);
                    break;
                case 'D':
                    printf("%s升华泰坦形态，各项能力强过您的全能形态百分之二百，%s\n",JI1,LUTU);
                    break;
                case 'E':
                    printf("%s惊异全能形态，各项能力强过您的全能形态百分之三百五，%s\n",JI1,LUTU);
                    break;
                default:puts(mosi);
                    break;
            }
                break;
            case 3:
                printf("请选择究极形态！\n");
                printf("A：究极form\nB：升华究极form\n");
                char form2;
                scanf("%s",&form2);
                switch (form2)
            {
                case 'A':
                    printf("%s究极form，各项能力强过您的全能形态百分之五百，%s",JI2,LUTU);
                    break;
                case 'B':
                    printf("%s升华究极form，各项能力强过您的全能形态百分之七百五，%s",JI2,LUTU);
                    break;
                default:puts(mosi);
                    break;
            }
                break;
            default:printf("退出模式选择！\n");
                break;
        }
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Agito变身模式
void Agito()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        printf("开始变身吧，请选择变身形态!\n");
        printf("1、大地形态  2、暴风形态  3、火焰形态  4、三重形态  5、燃烧形态  6、闪耀形态\n");
        char moshi;
        scanf("%s",&moshi);
        switch (moshi)
        {
            case '1':
                printf("Agito的通常型态，盔甲以金色为主，主要以“大地之力”产生出超人的力量。并无特殊武器，单纯以身体战斗，被称为'超越肉体之金'。\n身高：195cm\n体重：90kg\n拳击力：7t\n脚踢力：15t\n跳跃力：30m\n行动速度：100m需时5秒\n");
                break;
            case '2':
                printf("将“风之力”集于左臂，全身变为蓝色盔甲，以速度见长的型态。使用“暴风战戟（Storm Halberd）”长枪型武器，被称为“超越精神之青”。\n身高：198cm\n体重：89kg\n拳击力：7t（左手）、3t（右手）\n脚踢力：5t\n跳跃力：50m\n行动速度：100m需时4.5秒\n");
                break;
            case '3':
                printf("将“炎之力”集于右臂，全身变为赤色盔甲，以力量见长的型态。使用“火焰军刀（Flame Saber）”军刀型武器，被称为“超越感觉之赤”。\n身高：200cm\n体重：90kg\n拳击力：5t（左手）、10t（右手）\n脚踢力：7t\n跳跃力：20m\n行动速度：100m需时5.5秒\n");
                break;
            case '4':
                printf("集大地、风、炎之力，所变身而成的“三位一体”之战士。身体是金色的“大地型态”装甲，右臂是赤色的“火焰型态”装甲，左臂则是青色的“暴风型态”装甲，同时使用“火焰军刀”及“暴风战戟”为武器。\n身高：200cm\n体重：90kg\n拳击力：7t（左手）、10t（右手）\n脚踢力：15t\n跳跃力：50m\n行动速度：100m需时4.5秒\n");
                break;
            case '5':
                printf("随着翔一希望获得力量自我强化的意志，而显露出来的威力升级型态，主体为暗红色，将全身筋肉发挥到极限的“究极筋肉”之战士，化成火焰的能量于上半身四处喷出。腕力的提升成为必杀技之一。武器则是“闪耀弯刀（Shining Caliber）”展开而成的“单刀模式（Single Mode）”。\n身高：200cm\n体重：95kg\n拳击力：25t\n脚踢力：15t\n跳跃力：15m\n行动速度：100m需时6秒\n");
                break;
            case '6':
                printf("在太阳光辉照耀下，由燃烧型态表皮剥落后，显露出银色闪耀胸甲型态。力量由腕力转移至踢力，配合“技”的加强而成为AGITO最强型态。踢力的提升成为必杀技之一。武器则是“闪耀弯刀（Shining Caliber）”分解成的“双刀模式（Twin Mode）”，Agito的最终形态。\n身高：202cm\n体重：89kg\n拳击力：25t\n脚踢力：45t\n跳跃力：75m\n行动速度：100m需时4秒\n");
                break;
            default:printf("退出形态选择！\n");
                break;
        }
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//龙骑变身模式
void Ruki()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        printf("您即将开始踏上征程，请选择你的初始状态\n");
        printf("1、空白形态  2、契约形态  3、生存龙骑\n");
        int ruki;
        scanf("%d",&ruki);
        switch (ruki) {
            case 1:
                printf("您选择的是空白形态，基本资料如下：\n");
                printf("身高：190cm\n体重：90kg\n跳跃力：10m\n行动速度：100m需8秒\n契约兽：无\n召唤机：骑士召唤机（RideVisor）\n卡牌组:\n卡牌组	效果说明\nSword Vent （武器降临）	召唤武器为剑。（AP:300）\nGuard Vent （护盾降临）	并没有显示说明。（剧中并无使用此卡）。（GP:300）\nContract （契约）	可与一只镜怪兽缔结契约，一使用后变成一张该契约兽的降临卡。\nSeal（封印）	在现实世界中可防止被镜怪人攻击。后来真司有想要战斗下去的理由不再逃避把此卡撕毁。\n");
                break;
            case 2:
                printf("您选择的是契约形态，基本资料如下：\n");
                printf("身高：190cm\n体重：90kg\n跳跃力：35m\n行动速度：100m需5秒\n契约兽：无双龙（Dragreder）\n召唤机：龙召机甲（DragVisor）\n卡牌组:\n卡牌组	效果说明\nSword Vent （武器降临）	召唤武器为赤龙刀。（AP:2000）\nGuard Vent （护盾降临）	召唤赤龙盾。也可同时召唤两个并装备在肩上。（GP:2000）\nStrike Vent（重击降临）	召唤装备-无双龙爪，佩戴在右手上，并利用Dragreder发动“龙爪火”。（AP:3000）\nAdvent （契约兽降临）	召唤契约兽“无双龙（Dragreder）”。（AP:5000）\nFinal Vent （终极降临）	必杀技发动为“龙骑士踢”。（AP:6000）\nSurvive （生存-“烈火”）	使用时，一团小火会燃烧召唤机：龙召机甲（DragVisor），并进化为召唤机：龙召机甲贰式（DragVisor Zwei）之后从骑士的周边燃起一圈熊熊烈火，召唤机率先进化后，骑士将“生存卡”插入召唤机中，紧接着全身被烈火吞噬，不久，全新的“生存型态”骑士造型变宛如浴火重生般再现。\n");
                break;
            case 3:
                printf("您选择的是生存龙骑形态，基本资料如下：\n");
                printf("身高：193cm\n体重：95kg\n跳跃力：45m\n行动速度：100m需4.5秒\n契约兽：烈火龙（Dragranzer）\n召唤机：龙召机甲贰式（DragVisor Zwei）\n卡牌组:\n卡牌组	效果说明\nSword Vent （武器降临）	召唤武器为赤龙剑。（在剧中并无使用此降临卡，因已自动装备在召唤机上方）（AP:3000）\nGuard Vent （护盾降临）	发动“烈火龙壁”。（GP:4000）\nStrange Vent（陌生降临）	可随机从对方的牌组中复制一张卡。\nTrick Vent （戏敌降临）	召唤分身，发动“影子幻觉”。（卡片图示更改为5个龙骑，但龙骑并无此卡，此卡为Strange Vent复制而来）（AP:2000）\nShoot Vent （射击降临）	与Dragranzer一起发动“流星炎弹”。（AP:4000）\nAdvent（契约兽降临）	召唤契约兽“烈火龙（Dragranzer）”。（AP:7000）\nFinal Vent （终极降临）	发动必杀技“龙火风暴”。（AP:9000）\n");
                break;
            default:printf("退出形态选择！\n");
                break;
        }
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Faiz变身模式
void Faiz()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        long int code;
        char * heishen,* MODE;
        char * mode1="HEISHEN";
        char * b = "complete\n完成变身，请进行战斗吧！\n";
        printf("请选择系统模式：");
        scanf("%s",MODE);
        if(strcmp (MODE,mode1)==0)
        {
            printf("正在启动变身模式\n");
            printf("请输入变身代码\n");
            scanf("%ld",&code);
            switch (code)
            {
                case 555:
                    printf("standing by！\n请说出口令\n");
                    scanf("%s",heishen);
                    char * Bianshen="heishen";
                    if (strcmp (heishen,Bianshen)==0)
                    {
                        printf("%s",b);
                    }
                    else
                    {
                        printf("无法完成变身，请重新启动程序！\n");
                    }
                    break;
                case 999:
                    printf("ARE YOU READY！\n请选择Y(YES) OR N(NO)！\n");
                    char chose;
                    scanf("%s",&chose);
                    switch (chose)
                {
                    case 'Y':
                        printf("请输入开始口令：");
                        scanf("%s",heishen);
                        printf("GAME START!\n");
                        break;
                    case 'N':
                        printf("返回开始界面！\n");
                        break;
                    default:printf("警告！\n");
                        break;
                }
                    break;
                case 333:
                    printf("机车启动战斗形态\n");
                    scanf("%s",heishen);
                    printf("%s",b);
                    break;
                default:printf("转到通话模式，请稍候……\n");
                    break;
            }
        }
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Blade变身模式
void Blade()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Hibiki变身模式
void Hibiki()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Kabuto变身模式
void Kabuto()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Den_O变身模式
void Den_O()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Kiva变身模式
void Kiva()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Decade变身模式
void Decade()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Double变身模式
void Double()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//OOO变身模式
void OOO()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Fourze变身模式
void Fourze()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Wizard变身模式
WIZARD * head;
int n;
void Wizard()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
    loo:puts("*************Wizard's menu************");
        puts("             1:Creat");
        puts("             2:Print");
        puts("             3:Save");
        puts("             4:Load");
        puts("             5:Insert");
        puts("             6:Search");
        puts("             7:Game Start");
        puts("***************************************");
        int chose;
        printf("Please choose:");
        scanf("%d",&chose);
        switch (chose) {
            case 1:
                CreatWizard(head);
                break;
            case 2:
                PrintWizard(head);
                break;
            case 3:
                SaveWizard(head);
            default:
                break;
        }
        char chod;
        getchar();
        printf("YES/NO:");
        scanf("%c",&chod);
        if ('y'==chod) {
            goto loo;
        }
        else
        {
            goto lo;
        }
    }
    else
    {
    lo:printf("%s",choose2);
        KARMEN_RIDER();
    }
}
void CreatWizard(WIZARD * p)
{
    head = NULL;
    int  i = 0;
    WIZARD   * s;
    s = head;
    int n;
    printf("请输入元素个数：");
    scanf("%d",&n);
    while(i<n)
    {
        WIZARD  *  new = (WIZARD*)malloc(sizeof(WIZARD));
        if(0==i)
        {
            head = new;
        }
        else
        {
            s->pNEXT = new;
        }
        s= new;
        new->pNEXT=NULL;
        i++;
    }
    p = head;
    for (int i = 0; p!=NULL; ++i) {
        printf("请输入第%d个模式的信息：\n",i+1);
        //初始化数据域
        printf("ID:");
        scanf("%ld",&p->ID);
        printf("MODE:");
        scanf("%s",p->mode);
        printf("COLOR:");
        scanf("%s",p->color);
        printf("POWER:");
        scanf("%ld",&p->power);
        p = p->pNEXT;
    }
}
void PrintWizard(WIZARD * p)
{
    while (p!=NULL) {
        printf("%ld\t%s\t%s\t%ld\n",p->ID,p->mode,p->color,p->power);
        p=p->pNEXT;
    }
}
void SaveWizard(WIZARD * p)
{
    FILE *fp=NULL;
    fp = fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/WizardStyle.txt", "w");
    if (fp!=NULL) {
        puts("文件打开成功！");
//        WIZARD*s=p;
        for(;p!=NULL;){
            fprintf(fp, "%ld\t%s\t%s\t%ld\n",p->ID,p->mode,p->color,p->power);
            p=p->pNEXT;
        }
    }
}
//Gaimu变身模式
void Gaimu()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Drive变身模式
void Drive()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//Ghost变身模式
void Ghost()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    getchar();
    scanf("%c",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
//EX_Aid变身模式
void EX_Aid()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    getchar();
    scanf("%c",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        puts("你们好，我是宝生永梦，假面骑士EX-Aid的变身者，现在就由我来带领你们进入VR游戏世界吧!");
        puts("-------------------------------------------------------");
        puts("              1、Mighty Action X(全能动作X)");
        puts("              2、Taddle Quest(探索任务)");
        puts("              3、Bang Bang Shooting(砰砰射击)");
        puts("              4、Bakusou Bike(爆走机车)");
        puts("              5、Proto Mighty Action X(原型全能动作X)");
        puts("              6、隐藏卡带");
        puts("-------------------------------------------------------");
        printf("首先，你要选择你想要变身的模式，这里有最基本的变身卡带，请选择吧:");
        int chose;
        scanf("%d",&chose);
        switch (chose) {
            case 1:Exaid1();break;
            case 2:Exaid2();break;
            case 3:Exaid3();break;
            case 4:Exaid4();break;
            case 5:Exaid5();break;
            case 6:
                printf("你触发了隐藏条件,你将会进行随机抽取卡带进行变身!\n");
                srand((unsigned)time(NULL));
                int a = rand()%6;
                if (a==1) {Exaid1();}
                if (a==2) {Exaid2();}
                if (a==3) {Exaid3();}
                if (a==4) {Exaid4();}
                if (a==5) {Exaid5();}
                if (a==0) {
                    printf("恭喜你获得一个Kamen Rider Chronicle卡带，你将使用Kamen Rider Chronicle卡带进行游戏！\n");
                    printf("Kamen Rider Chronicle卡带没有等级限制，遇强则强。请变身吧！\n");
                    char bianshen[]="HS",hs[3];
                    scanf("%s",hs);
                    if (strcmp(hs, bianshen)==0) {
                        printf("Gachan！Level Up！Rider Chronicle！（A Gacha！）抓住天际的Rider！刻入Chronicle！现在正是时候到达极点！\n");
                    }
                    else{printf("输入代码错误！\n刷新状态\n"); Chronicle();}
                    printf("你已变身完成，请继续接下来的操作。\n");
                }
                break;
            default:puts("程序发生错误！");
                break;
        }
        printf("接下来就是记住你的技能键j(画面是随机的)：");
        char trick;
        getchar();
        scanf("%c",&trick);
        if (trick=='j') {
            srand((unsigned)time(NULL));
            int a = rand()%6;
            if (a==1) {puts("Mighty Critical Strike!");}
            if (a==2) {puts("Taddle Critical Strike!");}
            if (a==3) {puts("Bang Bang Critical Strike!");}
            if (a==4) {puts("Bakusou Critical Strike!");}
            if (a==5) {puts("Proto Mighty Critical Strike!");}
            if (a==0) {puts("Rider Critical Crews-Aid!");}
        }
        printf("知道怎么发动技能，接下来就是选择武器(p键)，一开始玩家会获得随机道具!\n");
        char pro;
        getchar();
        scanf("%c",&pro);
        if (pro=='p') {
            srand((unsigned)time(NULL));
            int a = rand()%6;
            if (a==1) {
                int b = rand()%6;
                if (b==1) {puts(Ga1);}
                if (b==2) {puts("获得Gashacon Key Slasher（Gashacon键盘剑）");}
                if (b==3) {puts("获得Gan Gun Saber（眼枪剑）");}
                if (b==4) {puts("获得Handle-Ken（方向盘剑）");}
                if (b==5) {puts("获得Daidaimaru（大橙丸）");}
                if (b==0) {puts("获得Ride Booker（Ride Booker）");}
            }
            if (a==2) {puts(Ga2);}
            if (a==3) {puts(Ga3);}
            if (a==4) {puts(Ga4);}
            if (a==5) {
                int b = rand()%10;
                if (b==1) {puts("获得Gashacon Bugvisor（Gashacon缺陷护罩）");}
                if (b==2) {puts(Ga4);}
                if (b==3) {puts(Ga2);}
                if (b==4) {puts("获得Gashacon Bugvisor Ⅱ(Zwei)（Gashacon缺陷护罩Ⅱ）");}
                if (b==5) {puts(Ga1);}
                if (b==0) {puts("获得Wizarswordgun（Wizarswordgun）");}
                if (b==6) {puts("获得Rousing Sword Blay Rouzer（醒剑[Blay Rouzer]）");}
                if (b==7) {puts("获得Ongekibou Rekka（音击棒·烈火）");}
                if (b==8) {puts("获得DenGasher（DenGasher）");}
                if (b==9) {puts("获得Medajaribur（Medajaribur）");}
            }
            if (a==0) {
                int b = rand()%4;
                if (b==1) {puts(Ga3);}
                if (b==2) {puts(Ga1);}
                if (b==3) {puts(Ga2);}
                if (b==0) {puts(Ga4);}
            }
        }
        puts("很好，接下来正式进入我们的游戏世界");
        enum EXAID{exaid=1,brave,sinpe,lazer,genm}chse;
    as1:
        puts("-----------------请选择主骑士--------------");
        puts("             1:假面骑士EX-AID");
        puts("             2:假面骑士BRAVE");
        puts("             3:假面骑士SINPE");
        puts("             4:假面骑士LAZER");
        puts("             5:假面骑士GENM");
        puts("-----------------------------------------");
        printf("your choose is:");
        scanf("%d",&chse);
        switch (chse) {
            case exaid:
                EX_AID();
                break;
            case brave:
                BRAVE();
                break;
            case sinpe:
                SINPE();
                break;
            case lazer:
                LAZER();
                break;
            case genm:
                GENM();
                break;
            default:goto as1;
                break;
        }
    }
    else
    {
        printf("%s",choose2);
        KARMEN_RIDER();
    }
}
void BRAVE()
{
    puts("----------------BRAVE MENU----------------");
    puts("               1:brave简介");
    puts("               2:brave可以使用的Gashat");
    puts("               3:brave的游戏地图");
    puts("               4:brave的初始化变身");
    puts("               5:brave的等级介绍");
    puts("               6:保存brave的相关数据");
    puts("-------------------------------------------");
    int choose_brave;
    printf("please choose:");
    scanf("%d",&choose_brave);
    switch (choose_brave) {
        case 1:{
            FILE * fp=NULL;
            fp = fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/brave介绍.txt", "r");
            if (fp!=NULL) {
                char q[1150];
                for (int i = 0; i<64; ++i) {
                    fscanf(fp, "%s",q);
                    printf("%s\n",q);
                }
            }
            fclose(fp);
            fp = NULL;
            break;
        }
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:{
            FILE * fp=NULL;
            fp = fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/brave数据.txt", "w");
            if (fp!=NULL) {
                char q[1150];
                for (int i = 0; i<64; ++i) {
                    fscanf(fp, "%s",q);
                    printf("%s\n",q);
                }
            }
            fclose(fp);
            fp = NULL;
            break;
        }
        default:
            break;
    }
}
void SINPE()
{
    puts("----------------SINPE MENU----------------");
    puts("               1:sinpe简介");
    puts("               2:sinpe可以使用的Gashat");
    puts("               3:sinpe的游戏地图");
    puts("               4:sinpe的初始化变身");
    puts("               5:sinpe的等级介绍");
    puts("               6:保存sinpe的相关数据");
    puts("-------------------------------------------");
    int choose_sinpe;
    printf("please choose:");
    scanf("%d",&choose_sinpe);
    switch (choose_sinpe) {
        case 1:{
            FILE * fp=NULL;
            fp = fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/sinpe介绍.txt", "r");
            if (fp!=NULL) {
                char q[1150];
                for (int i = 0; i<64; ++i) {
                    fscanf(fp, "%s",q);
                    printf("%s\n",q);
                }
            }
            fclose(fp);
            fp = NULL;
            break;
        }
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            break;
    }
}
void LAZER()
{
    puts("----------------LAZER MENU----------------");
    puts("               1:lazer简介");
    puts("               2:lazer可以使用的Gashat");
    puts("               3:lazer的游戏地图");
    puts("               4:lazer的初始化变身");
    puts("               5:lazer的等级介绍");
    puts("               6:保存lazer的相关数据");
    puts("-------------------------------------------");
    int choose_lazer;
    printf("please choose:");
    scanf("%d",&choose_lazer);
    switch (choose_lazer) {
        case 1:{
            FILE * fp=NULL;
            fp = fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/lazer介绍.txt", "r");
            if (fp!=NULL) {
                char q[1150];
                for (int i = 0; i<64; ++i) {
                    fscanf(fp, "%s",q);
                    printf("%s\n",q);
                }
            }
            fclose(fp);
            fp = NULL;
            break;
        }
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            break;
    }
}
void GENM()
{
    puts("----------------GENM MENU----------------");
    puts("               1:genm简介");
    puts("               2:genm可以使用的Gashat");
    puts("               3:genm的游戏地图");
    puts("               4:genm的初始化变身");
    puts("               5:genm的等级介绍");
    puts("               6:保存genm的相关数据");
    puts("-------------------------------------------");
    int choose_genm;
    printf("please choose:");
    scanf("%d",&choose_genm);
    switch (choose_genm) {
        case 1:{
            FILE * fp=NULL;
            fp = fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/genm介绍.txt", "r");
            if (fp!=NULL) {
                char q[1150];
                for (int i = 0; i<64; ++i) {
                    fscanf(fp, "%s",q);
                    printf("%s\n",q);
                }
            }
            fclose(fp);
            fp = NULL;
            break;
        }
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            break;
    }
}
void GAshat()
{
    puts("这里有很多的卡带(Gashat),请在以下卡带(Gashat)中选择：");
    puts("-----------------------------------------------");
    puts("              1:普通卡带(Gashat)");
    puts("              2:双重卡带(DoubleGashat)");
    puts("              3:传奇骑士卡带(LegendGashat)");
    puts("-----------------------------------------------");
    int chose;
    printf("Please choose:");
    scanf("%d",&chose);
    switch (chose) {
        case 1:{
        loop:{
                FILE*fp=NULL;
                fp = fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/Gashat.txt", "r");
                if (fp!=NULL) {
                    char p[80];
                    for (int i = 0; i<17; ++i) {
                        fscanf(fp, "%s",p);
                        printf("%s\n",p);
                    }
                }
                fclose(fp);
                fp=NULL;
                char chose,chose1;
                int chose2;
                printf("Please choose(examp:A&1):");
                getchar();
                scanf("%c%c%d",&chose,&chose1,&chose2);
                if ((chose>='A'&&chose<='E')&&(chose2>=1&&chose2<=10)) {
                    switch (chose) {
                        case 'A':
                            switch (chose2) {
                                case 1:
                                    puts("fusion,Gashat!——Mighty Brothers XX");
                                    puts("我即是你!你即是我!(We Are!)Mighty!Mighty!Brothers(Hey!)Double X!");
                                    break;
                                case 2:
                                    puts(SRYWU);
                                    break;
                                case 3:
                                    puts(SRYWU);
                                    break;
                                case 4:
                                    puts("fusion!Gashat——Combi Fukkatsu ver.");
                                    puts("爆走！独走！激走！暴走！爆~走~ 机车~！");
                                    break;
                                case 5:
                                    puts("Level UP:Sports Action Gamer Level 3");
                                    puts(SPORT);
                                    break;
                                case 6:
                                    puts("Level UP:Robot Action Gamer Level 3");
                                    puts(RBT);
                                    break;
                                case 7:
                                    puts("Level UP:Beat Action Gamer Level 3");
                                    puts(BEAT);
                                    break;
                                case 8:
                                    puts("Level UP:Chambara Action Gamer Level 3");
                                    puts(CHBA);
                                    break;
                                case 9:
                                    puts("Level UP:Combat Action Gamer Level 3");
                                    puts(JET);
                                    break;
                                case 10:
                                    puts("Level UP:Hunter Action Gamer Level 5 Full Dragon");
                                    puts(DRAGO);
                                    break;
                                default:puts(CUOC);
                                    break;
                            }
                            break;
                        case 'B':
                            switch (chose2) {
                                case 1:
                                    puts(SRYWU);
                                    break;
                                case 2:
                                    puts(SRYWU);
                                    break;
                                case 3:
                                    puts(SRYWU);
                                    break;
                                case 4:
                                    puts(SRYWU);
                                    break;
                                case 5:
                                    puts("Level UP:Sports Quest Gamer Level 3");
                                    puts(SPORT);
                                    break;
                                case 6:
                                    puts("Level UP:Robot Quest Gamer Level 3");
                                    puts(RBT);
                                    break;
                                case 7:
                                    puts("Level UP:Beat Quest Gamer Level 3");
                                    puts(BEAT);
                                    break;
                                case 8:
                                    puts("Level UP:Chambara Quest Gamer Level 3");
                                    puts(CHBA);
                                    break;
                                case 9:
                                    puts("Level UP:Combat Quest Gamer Level 3");
                                    puts(JET);
                                    break;
                                case 10:
                                    puts("Level UP:Hunter Quest Gamer Level 5 Full Dragon");
                                    puts(DRAGO);
                                    break;
                                default:puts(CUOC);
                                    break;
                            }
                            break;
                        case 'C':
                            switch (chose2) {
                                case 1:
                                    puts(SRYWU);
                                    break;
                                case 2:
                                    puts(SRYWU);
                                    break;
                                case 3:
                                    puts(SRYWU);
                                    break;
                                case 4:
                                    puts(SRYWU);
                                    break;
                                case 5:
                                    puts("Level UP:Sports Shooting Gamer Level 3");
                                    puts(SPORT);
                                    break;
                                case 6:
                                    puts("Level UP:Robot Shooting Gamer Level 3");
                                    puts(RBT);
                                    break;
                                case 7:
                                    puts("Level UP:Beat Shooting Gamer Level 3");
                                    puts(BEAT);
                                    break;
                                case 8:
                                    puts("Level UP:Chambara Shooting Gamer Level 3");
                                    puts(CHBA);
                                    break;
                                case 9:
                                    puts("Level UP:Combat Shooting Gamer Level 3");
                                    puts(JET);
                                    break;
                                case 10:
                                    puts("Level UP:Hunter Shooting Gamer Level 5 Full Dragon");
                                    puts(DRAGO);
                                    break;
                                default:puts(CUOC);
                                    break;
                            }
                            break;
                        case 'D':
                            switch (chose2) {
                                case 1:
                                    puts(SRYWU);
                                    break;
                                case 2:
                                    puts(SRYWU);
                                    break;
                                case 3:
                                    puts(SRYWU);
                                    break;
                                case 4:
                                    puts(SRYWU);
                                    break;
                                case 5:
                                    puts("Level UP:Sports Bike Gamer Level 3");
                                    puts(SPORT);
                                    break;
                                case 6:
                                    puts("Level UP:Robot Bike Gamer Level 3");
                                    puts(RBT);
                                    break;
                                case 7:
                                    puts("Level UP:Beat Bike Gamer Level 3");
                                    puts(BEAT);
                                    break;
                                case 8:
                                    puts("Level UP:Chambara Bike Gamer Level 3");
                                    puts(CHBA);
                                    break;
                                case 9:
                                    puts("Level UP:Combat Bike Gamer Level 3");
                                    puts(JET);
                                    break;
                                case 10:
                                    puts("Level UP:Hunter Bike Gamer Level 5 Full Dragon");
                                    puts(DRAGO);
                                    break;
                                default:puts(CUOC);
                                    break;
                            }
                            break;
                        case 'E':
                            switch (chose2) {
                                case 1:
                                    puts(SRYWU);
                                    break;
                                case 2:
                                    puts(SRYWU);
                                    break;
                                case 3:
                                    puts(SRYWU);
                                    break;
                                case 4:
                                    puts(SRYWU);
                                    break;
                                case 5:
                                    puts("Level UP:Sports Genm Gamer Level 3");
                                    puts(SPORT);
                                    break;
                                case 6:
                                    puts("Level UP:Robot Genm Gamer Level 3");
                                    puts(RBT);
                                    break;
                                case 7:
                                    puts("Level UP:Beat Genm Gamer Level 3");
                                    puts(BEAT);
                                    break;
                                case 8:
                                    puts("Level UP:Chambara Genm Gamer Level 3");
                                    puts(CHBA);
                                    break;
                                case 9:
                                    puts("Level UP:Combat Genm Gamer Level 3");
                                    puts(JET);
                                    break;
                                case 10:
                                    puts("Level UP:Hunter Genm Gamer Level 5 Full Dragon");
                                    puts(DRAGO);
                                    break;
                                default:puts(CUOC);
                                    break;
                            }
                            break;
                        default:puts(CUOC);
                            break;
                    }
                }
                else
                {
                    puts(CUOC);
                    goto loop;
                }
                printf("是否继续操作(y继续,其他键退出):");
                char yes;
                getchar();
                scanf("%c",&yes);
                if (yes == 'y') {
                    goto loop;
                }
        }
            break;}
        case 2:{
        lk:{FILE*fp=NULL;
            fp =fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/双重Gashat.txt", "r");
            if (fp!=NULL) {
                char p[40];
                for (int i = 0; i<6; ++i) {
                    fscanf(fp, "%s",p);
                    printf("%s\n",p);
                }
            }
            fclose(fp);
            fp=NULL;
            int chose2;
            printf("Please choose:");
            scanf("%d",&chose2);
            switch (chose) {
                case 1:
                    puts("Gashat Gear Dual！The strongest fist！What's the next stage？");
                    puts("Perfect Knock Out Gamer Level 99:红色之拳强大！蓝色拼图连锁！红与蓝的交错！Perfect Knock Out！");
                    break;
                case 2:
                    puts("Perfect Puzzle！What’s the next stage？");
                    puts("Puzzle Gamer Level 50:Get the glory in the chain.PERFECT PUZZLE！");
                    break;
                case 3:
                    puts("Knock Out Fighter！The strongest fist！ “Round 1” Rock & Fire！");
                    puts("Fighter Gamer Level 50:Explosion Hit！KNOCK OUT FIGHTER！");
                    break;
                case 4:
                    puts("Taddle Fantasy！Let's going King of Fantasy！");
                    puts("Fantasy Gamer Level 50:Taddle Meguru RPG！Taddle Fantasy！");
                    break;
                case 5:
                    puts("Bang Bang Simulations！I ready for Battleship！");
                    puts("Simulation Gamer Level 50:Scramble了！出击进发 Bang Bang Simulations！进发！");
                    break;
                default:puts(CUOC);
                    break;
            }
            char yes;
            printf("是否继续（y/n）:");
            getchar();
            scanf("%c",&yes);
            if ('y'==yes) {
                goto lk;
            }
        }
            break;}
        case 3:{
        loo:{
                FILE*fp=NULL;
                fp = fopen("/Users/mac/Desktop/c/HeroGame/HeroGame/传奇骑士Gashat.txt", "r");
                if (fp!=NULL) {
                    char p[80];
                    for (int i = 0; i<20; ++i) {
                        fscanf(fp, "%s",p);
                        printf("%s\n",p);
                    }
                }
                fclose(fp);
                fp=NULL;
                int chose2;
                printf("Please choose:");
                scanf("%d",&chose2);
                switch (chose2) {
                    case 1:{
                        puts("Let's Go Ichi Gou！");
                        puts("chigou Gamer Level 2:Rider Punch！Rider Kick！Rider！Rider！Action！Go！");
                        puts("Level UP:Cy-Cy-Cy-骑着Cyclone激走！变身吧！上吧 Rider Fight！");
                        break;}
                    case 2:{
                        puts("Kaigan Ghost！");
                        puts("Ghost Gamer Level 1:燃烧生命！做好觉悟！我是Ghost！");
                        puts("Ghost Gamer Level 2:Go！Go-Go！Go-Go！开眼 Let's Go！Go！Go-Go！Go-Go！开眼 觉Ghost！");
                        break;}
                    case 3:{
                        puts("Full Throttle Drive！");
                        puts("Drive Gamer Level 1:Tri！Tri！Tri！乘着Tridoron爆走！陪我跑一圈 Full Throttle Drive！");
                        puts("Drive Gamer Level 2:Bu-Bun-Bun！ Bun-Bu-Bun！脑细胞已Top Gear！");
                        break;}
                    case 4:{
                        puts("Toukenden Gaim！");
                        puts("Gaim Gamer Level 1:刀剑传-Den-Den-Den-De-De-Den！Fruits Chambara！");
                        puts("Gaim Gamer Level 2:柳橙 草莓 凤梨！香蕉！葡萄！蜜瓜！Soiya！铠武！");
                    break;}
                    case 5:{
                        puts("Magic The Wizard！");
                        puts("Wizard Gamer Level 1:Sha-Sha-Shabadobie Touch地变身！Please！Magic The Wizard！");
                        puts("Wizard Gamer Level 2:D-D-Drago！R-R-R-R~ise！Flame！Water！Hurricane！Land！All Dragon！");
                        break;}
                    case 6:{
                        puts("Space Galaxy Fourze！（3.2.1.）");
                        puts("Fourze Gamer Level 1:飞起！友情！青春Galaxy！3.2.1.Fourze！");
                        puts("Fourze Gamer Level 2:Rocket！Rocket！Switch On！Space！Space！Galaxy Fourze！");
                        break;}
                    case 7:{
                        puts("Jungle OOO！");
                        puts("OOO Gamer Level 1:TakaTora！TakaTora！Batta！Jungle！Jungle！OOO");
                        puts("OOO Gamer Level 2:TaToBa·GataKiriBa·ShaUTa·DaGohZo·LaTorarTar·PuToTyra·TaJaDol·OOO！");
                        break;}
                    case 8:{
                        puts("Meitantei Double！");
                        puts("Double Gamer Level 1:Half-Boiled！来细数！你的罪恶！名侦探W！");
                        puts("Double Gamer Level 2:Cyclone！Joker！二人即一人！Cyclone！Joker！二人即Xtreme！");
                        break;}
                    case 9:{
                        puts("Barcode Warrior Decade！");
                        puts("Decade Gamer Level 2:Destroyer！世界的破坏者 Barcode Warrior！");
                        break;}
                    case 10:{
                        puts("Doki Doki Makai-Jou Kiva！（Gabu！）");
                        puts("Kiva Gamer Level 1:Va-Vam-Vam-Vam-Vampire！魔界城Kiva！");
                        puts("Kiva Gamer Level 2:心跳不已！紧咬不放！Kivat-Bat！Gabu地变身！Vampire！");
                        break;}
                    case 11:{
                        puts("Jiku Tokkyu Den-O！");
                        puts("Den-O Gamer Level 2:Den-Den-电王！坐电车参上！时空特急！上吧 Climax Jump！");
                        break;}
                    case 12:{
                        puts("Konchu Daisensou Kabuto！");
                        puts("Kabuto Gamer Level 2:Te-Ten-Ten-天之道！Ca-Ca-Ca-Cast Off！Clock Up！Beetle！");
                        break;}
                    case 13:{
                        puts("Taiko Master Hibiki！");
                        puts("Hibiki Gamer Level 1:Hit！Hit！Hit！太鼓Master响鬼！");
                        puts("Hibiki Gamer Level 2:Do-Don-Don-Do-Don！Do-Don-Don-Do-Don！着实地锻炼了一番、响鬼！");
                        break;}
                    case 14:{
                        puts("King of Poker Blade！");
                        puts("Blade Gamer Level 2:King！King！King！King of Poker Blade！");
                        break;}
                    case 15:{
                        puts("Moshi Moshi Faiz！");
                        puts("Faiz Gamer Level 1:Moshi MoshiFaiz！Moshi MoshiFaiz！");
                        puts("Faiz Gamer Level 2:手机独一无二555！「Complete」 Moshi MoshiFaiz！");
                        break;}
                    case 16:{
                        puts("Mirror Labyrinth Ryuki！");
                        puts("Ryuki Gamer Level 2:Dragon Knight！Mirror Labyrinth 龙骑！");
                        break;}
                    case 17:{
                        puts("Taiyou no Agito！");
                        puts("Agito Gamer Level 2:Flame！Storm！Ground！Burning Shining！太阳的AgitΩ！");
                        break;}
                    case 18:{
                        puts("Bouken Yaro Kuuga！");
                        puts("Kuuga Gamer Level 1:Mighty Form！Mighty Kick！冒险小子！空我！");
                        puts("Kuuga Gamer Level 2:Mighty Dragon！Pegasus Titan！Rising Amazing！Ulimate！Kuuga！");
                        break;}
                    case 19:{
                        puts("Kamen Rider Build！");
                        puts("Gamer Level up:RabbitTank！兔子与坦克！Best Best Match！Yeah！");
                        break;}
                    default:puts(CUOC);
                        break;
                    }
                printf("是否继续操作(y继续,其他键退出):");
                char yes;
                getchar();
                scanf("%c",&yes);
                if (yes == 'y') {
                    goto loo;
                }
        }
            break;}
    }
}
void Chronicle()
{
    puts("恭喜你获得一个Kamen Rider Chronicle卡带，你将使用Kamen Rider Chronicle卡带进行游戏！");
    puts("Kamen Rider Chronicle卡带没有等级限制，遇强则强。请变身吧！(HS)");
    char bianshen[]="HS",hs[3];
    scanf("%s",hs);
    if (strcmp(hs, bianshen)==0) {
        puts("Gachan！Level Up！Rider Chronicle！（A Gacha！）抓住天际的Rider！刻入Chronicle！现在正是时候到达极点！");
    }
    else{puts("输入代码错误！"); Chronicle();}
}
void Exaid1()//Mighty Action X
{
    puts("你选择的是Mighty Action X(全能动作X)，使用这个卡带可以变身为EX-Aid的LV1和LV2。");
    puts(BUG);
    int chose1;
    scanf("%d",&chose1);
    if (chose1==1) {
        puts(Gashat);
        puts("恭喜你变身完成EX-Aid的LV1，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	181cm	踢力：	11.5t\n体重：	137kg	跳跃力：	30.5m\n拳击力：	7.7t	跑速：	100m/7.6s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
    if (chose1==2) {
        puts("Gachan！Level Up！Mighty Jump！Mighty Kick！Mighty Mighty Action X！");
        puts("恭喜你变身完成EX-Aid的LV2，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	205cm	踢力：	10.2t\n体重：	97kg	跳跃力：	43.1m\n拳击力：	5.7t	跑速：	100m/3.2s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
}
void Exaid2()//Taddle Quest
{
    puts("你选择的是Taddle Quest(探索任务)，使用这个卡带可以变身为Brave的LV1和LV2。");
    puts(BUG);
    int chose2;
    scanf("%d",&chose2);
    if (chose2==1) {
        puts(Gashat);
        puts("恭喜你变身完成Brave的LV1，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	181cm	踢力：	11.5t\n体重：	139.5kg	跳跃力：	30.5m\n拳击力：	7.7t	跑速：	100m/7.6s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
    if (chose2==2) {
        puts("Gachan！Level Up！Taddle Meguru！Taddle Meguru！Taddle Quest！");
        puts("恭喜你变身完成Brave的LV2，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	203.5cm	踢力：	13.5t\n体重：	99.5kg	跳跃力：	32.7m\n拳击力：	7.5t	跑速：	100m/4.2s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
}
void Exaid3()//Bang Bang Shooting
{
    puts("你选择的是Bang Bang Shooting(砰砰射击)，使用这个卡带可以变身为Snipe的LV1和LV2。");
    puts(BUG);
    int choose3;
    scanf("%d",&choose3);
    if (choose3==1) {
        puts(Gashat);
        puts("恭喜你变身完成Snipe的LV1，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	178cm	踢力：	11.5t\n体重：	138.5kg	跳跃力：	30.5m\n拳击力：	7.7t	跑速：	100m/7.6s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
    if (choose3==2) {
        puts("Gachan！Level Up！Ba-Bang-Bang！Bang-Ba-Bang！（Yeah！）Bang Bang Shooting！（Go！）");
        puts("恭喜你变身完成Snipe的LV2，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	199.5cm	踢力：	11.9t\n体重：	98.5kg	跳跃力：	37.9m\n拳击力：	6.6t	跑速：	100m/3.7s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
}
void Exaid4()//Bakusou Bike
{
    puts("你选择的是Bakusou Bike(爆走机车)，使用这个卡带可以变身为Lazer的LV1和LV2。");
    puts(BUG);
    int choose4;
    scanf("%d",&choose4);
    if (choose4==1) {
        puts(Gashat);
        puts("恭喜你变身完成Lazer的LV1，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	180cm	踢力：	11.5t\n体重：	184kg	跳跃力：	30.5m\n拳击力：	7.7t	跑速：	100m/7.6s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
    if (choose4==2) {
        puts("Gachan！Level Up！爆走！独走！激走！暴走！爆走机车！");
        puts("恭喜你变身完成Lazer的LV2，Lazer的二速状态，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	222cm	马力：	150.5ps（110.7kw）\n体重：	144kg	最高速度：	278km/h\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
}
void Exaid5()//Proto Mighty Action X
{
    puts("你选择的是Proto Mighty Action X(原型全能动作X)，使用这个卡带可以变身为GENM的LV1和LV2。");
    puts(BUG);
    int choose5;
    scanf("%d",&choose5);
    if (choose5==1) {
        puts(Gashat);
        puts("恭喜你变身完成GENM的LV1，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	181cm	踢力：	11.5t\n体重：	137kg	跳跃力：	30.5m\n拳击力：	7.7t	跑速：	100m/7.6s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
    if (choose5==2) {
        puts("Gachan！Level Up！Mighty Jump！Mighty Kick！Migh～ty Actio～n X！");
        puts("恭喜你变身完成GENM的LV2，以下是你现在的属性：");
        char i;
        while (1) {
            do {
                printf("身高：	205cm	踢力：	10.2t\n体重：	97kg	跳跃力：	43.1m\n拳击力：	5.7t	跑速：100m/3.2s\n");
                printf(SUXIN);
                getchar();
                scanf("%c",&i);
            } while (i =='i');
            puts(AN);
            char y_n;
            getchar();
            scanf("%c",&y_n);
            if (y_n=='y') {
                break;
            }
            if (y_n=='n') {
                continue;
            }
            if (y_n!='y'&&y_n!='n') {
                puts(CUOC);
                EX_Aid();
            }
        }
    }
}
void EX_AID()
{
    puts("***********************************************************");
    puts("                  第一章：获得GAME DRIVER！                 ");
    puts("            地点：圣都       时间：2017.12.25               ");
    puts("***********************************************************");
    puts("想要获得GAMER DRIVER，首先需要获得医生执照！");
    chose1();
    puts("Please tell me your change the password!");
    printf("Password(heishen):");
    char*pass="heishen";
    char pas[10];
    scanf("%s",pas);
    if (strcmp(pass, pas)==0) {
        puts(Gashat);
    }
    puts("Your mode is Action Gamer Level 1,please input password!");
    printf("password is(NEXT):");
    char * q = "NEXT";
    char p[10];
    scanf("%s",p);
    if (strcmp(q, p)==0) {
        GAshat();
    }
    puts("你已经选择好变身形态，请无续命的通关游戏吧！");
    
    
}
void chose1()
{
    puts("Please tell me HōjōEmu‘s game driver is where get?");
    puts("*******************************************************");
    puts("*  A:Hospital B:Bank C:Shopping Mall D:Amusement Park *");
    puts("*******************************************************");
    printf("Please choose:");
    char chose;
    getchar();
    scanf("%c",&chose);
    if ('A'==chose) {
        puts("Nice answer!Now,please tell me your name.This name will follow you to the customs clearance games!");
        printf("Your name is:");
        char name[5];
        scanf("%s",name);
        puts("OK!You have get game driver!");
    }
    else
    {
        puts("Sorry,your answer is wrong!Unable to continue EX_AID's game!Would you please to choose!");
        chose1();
    }
}
void chose2()
{
    
}
//Build变身模式
void Build()
{
    puts(choose);
    puts(choose1);
    char YES_OR_NO;
    scanf("%s",&YES_OR_NO);
    if (YES_OR_NO=='Y')
    {
        
    }
    else
    {
        printf("%s",choose2);
    }
}
