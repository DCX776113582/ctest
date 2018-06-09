//
//  main.c
//  HeroGame
//
//  Created by mac on 18/1/15.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "choose.h"
#include "Rider_Information.h"
extern RDM * head;
extern SET * sentaihead;
int main(int argc, const char * argv[]) {
    int chose;
    char yes;
loop:do
{
    puts("********************************************");
    puts("*                                          *");
    puts("*          1:Game Start(游戏开始)");
    puts("*          2:Sound Settings(音量设置)");
    puts("*          3:The operation setting()");
    puts("*          4:Display Settings");
    puts("*          5:Creat Data(创建数据)");
    puts("*          6:Save Data(保存数据)");
    puts("*          7:Load Data(读取数据)");
    puts("*          8:Delete Data(删除数据)");
    puts("*          9:Insert Data(添加数据)");
    puts("*          10:Print Data(打印数据)");
    puts("*          11:Search Data(查寻数据)");
    puts("*          12:Inverse Data(逆置数据)");
    puts("*          13:Sort Data(排列数据)");
    puts("*          14:Modify Data(修改数据)");
    puts("*          15:Exit(Release)(释放)");
    puts("*                                          *");
    puts("********************************************");
    printf("请选择：");
    scanf("%d",&chose);
    switch (chose) {
        case 1:{
            puts("Game Start");
            puts("********************************************");
            puts("*                                          *");
            puts("*          1:ULTRAMAN                      *");
            puts("*          2:KARMEN RIDER                  *");
            puts("*          3:SUPER SENTAI                  *");
            puts("*          4:METAL HERO                    *");
            puts("*          5:EXIT                          *");
            puts("*                                          *");
            puts("********************************************");
            printf("请选择：");
            int choose;
            scanf("%d",&choose);
            switch(choose){
                case 1:puts("ULTRAMAN");
                    ULTRAMAN();break;
                case 2:puts("KARMEN RIDER");
                    KARMEN_RIDER();break;
                case 3:puts("SUPER SENTAI");
                    SUPER_SENTAI();break;
                case 4:
                    puts("METAL HERO ");
                    METAL_HERO();break;
            default:puts("Game Close");break;
            }
            break;
        }
        case 2:{
            puts("音量");
            break;}
        case 3:{
            puts("音量");
            break;}
        case 4:{
            puts("音量");
            break;}
        case 5:{
        chuang:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    CreatRiderInformatin(head);
                    break;
                case 2:
                    CreatSentaiInformatin(sentaihead);
                    break;
                default:puts("创建失败，重新创建！");
                    goto chuang;
                    break;
            }
            puts("创建成功！");
            break;}
        case 6:{
        chang:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    SaveRiderInformatin(head);
                    break;
                case 2:
                    SaveSentaiInformatin(sentaihead);
                    break;
                default:puts("保存失败，重新保存！");
                    goto chang;
                    break;
            }
            puts("保存成功");
            break;}
        case 7:{
        cang:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    LoadRiderInformatin(head);
                    break;
                case 2:
                    LoadSentaiInformatin(sentaihead);
                    break;
                default:puts("读取失败，重新读取！");
                    goto cang;
                    break;
            }
            puts("读取成功！");
            break;}
        case 8:{
        chuan:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    DeleteRiderInformatin(head);
                    break;
                case 2:
                    DeleteSentaiInformatin(sentaihead);
                    break;
                default:puts("删除失败，重新删除！");
                    goto chuan;
                    break;
            }
            break;}
        case 9:{
        chan:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    InsretRiderInformatin(head);
                    break;
                case 2:
                    InsretSentaiInformatin(sentaihead);
                    break;
                default:puts("添加失败，重新添加！");
                    goto chan;
                    break;
            }
            puts("添加数据成功！");
            break;}
        case 10:{
        chu:puts("1:RiderInformatin\t2:SentaiInformatin\t3:All");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    PrintRiderInformatin(head);
                    break;
                case 2:
                    PrintSentaiInformatin(sentaihead);
                    break;
                case 3:
                    PrintRiderInformatin(head);
                    PrintSentaiInformatin(sentaihead);
                    break;
                default:puts("打印失败，重新打印！");
                    goto chu;
                    break;
            }
            puts("打印成功！");
            break;}
        case 11:{
        cu:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    SearchRiderInformatin(head);
                    break;
                case 2:
                    SearchSentaiInformatin(sentaihead);
                    break;
                default:puts("查寻失败，重新查寻！");
                    goto cu;
                    break;
            }
            break;}
        case 12:{
        u:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    InverseRiderInformatin(head);
                    break;
                case 2:
                    InverseSentaiInformatin(sentaihead);
                    break;
                default:puts("逆置操作失败，重新操作！");
                    goto u;
                    break;
            }
            puts("逆置数据成功");
            break;}
        case 13:{
        去:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    sortlinkRiderInformatin(head);
                    break;
                case 2:
                    sortlinkSentaiInformatin(sentaihead);
                    break;
                default:puts("排序操作失败，重新操作！");
                    goto 去;
                    break;
            }
            puts("排序成功！");
            break;}
        case 14:{
            ku:puts("1:RiderInformatin\t2:SentaiInformatin");
            int choo;
            printf("Please choose:");
            scanf("%d",&choo);
            switch (choo) {
                case 1:
                    ModifyRiderInformatin(head);
                    break;
                case 2:
                    ModifySentaiInformatin(sentaihead);
                    break;
                default:puts("修改操作失败，重新操作！");
                    goto ku;
                    break;
            }
            break;}
        case 15:{
            FreeRiderInformatin();
            puts("内存释放成功！");
            goto tui;
            break;}
        default:puts("错误！");
            goto tui;
            break;
    }
    printf("是否继续操作(y键继续，其他键退出)：");
    getchar();
    scanf("%c",&yes);
    if ('y'==yes) {
        goto loop;
    }
    else
    {tui:
        FreeSentaiInformatin();
        break;
    }
}while(1);
    return 0;
}
