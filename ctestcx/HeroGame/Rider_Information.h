//
//  Rider_Information.h
//  HeroGame
//
//  Created by mac on 18/1/19.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#ifndef __HeroGame__Rider_Information__
#define __HeroGame__Rider_Information__

#include <stdio.h>
typedef struct RiderInformatin{
    long ID;
    char Name[10];
    int year;
    
    struct RiderInformatin * pNEXT;
} RDM;
typedef struct SentaiInformatin{
    long ID;
    long SentaiID;
    char NAME[10];
    char color[10];
    int year;
    
    struct SentaiInformatin *Pnext;
}SET;
//骑士
void CreatRiderInformatin(RDM * p);//创建
void PrintRiderInformatin(RDM * p);//打印
void SaveRiderInformatin(RDM * p);//保存
void LoadRiderInformatin(RDM * p);//读取
void DeleteRiderInformatin(RDM * p);//删除
void InsretRiderInformatin(RDM * p);//插入，添加
void SearchRiderInformatin(RDM * p);//查寻
void InverseRiderInformatin(RDM * p);//逆置
void FreeRiderInformatin();//释放
void exchange(RDM*p1,RDM*q);
void sortlinkRiderInformatin(RDM*p);//排序
void ModifyRiderInformatin(RDM*p);//修改
//战队
void chushihua(SET*new);
void CreatSentaiInformatin(SET * p);//创建
void PrintSentaiInformatin(SET * p);//打印
void SaveSentaiInformatin(SET* p);//保存
void LoadSentaiInformatin(SET * p);//读取
void DeleteSentaiInformatin(SET * p);//删除
void InsretSentaiInformatin(SET * p);//插入，添加
void SearchSentaiInformatin(SET * p);//查寻
void InverseSentaiInformatin(SET * p);//逆置
void FreeSentaiInformatin();//释放
void sortlinkSentaiInformatin(SET*p);//排序
void ModifySentaiInformatin(SET*p);//修改

#endif /* defined(__HeroGame__Rider_Information__) */
