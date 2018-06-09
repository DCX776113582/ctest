//
//  Rider.h
//  HeroGame
//
//  Created by mac on 18/1/15.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#ifndef __HeroGame__Rider__
#define __HeroGame__Rider__

#define choose  "游戏马上开始，你准备好了吗？"
#define choose1  "    Y(YES)     N(NO)    "
#define choose2  "重新选择你的骑士!\n"
//karmen-rider-kuuga
#define JI "变身完毕，您的基本形态为"
#define JI1 "变身完毕，您的升华形态为"
#define JI2 "变身完毕，您的究极形态为"
#define LUTU "请注意您的生命值，祝您游戏旅途愉快！"
//karmen-rider-ex-aid
#define Gashat "Gashat！Let's Game！Metcha Game！Mutcha Game！Whatcha Name！？I'm a Kamen Rider！"
#define Ga1 "获得Gashacon Breaker（Gashacon破坏者）"
#define Ga2 "获得Gashacon Sword（Gashacon圣剑）"
#define Ga3 "获得Gashacon Magnum（Gashacon麦林枪）"
#define Ga4 "获得Gashacon Sparrow（Gashacon雀形弓）"
#define SUXIN "你按键盘的i键，属性栏还会出现的(其他键退出属性):"
#define BUG "Bugster Virus出现在你的眼前，你需要选择你变身的等级，请选择：1、LV1  2、LV2。"
#define AN "你按了其他键，属性栏将不再游戏中再次出现，请确认是否记住你的属性。记住请按y键，没有请按n键。"
#define CUOC "出错，重新开始！"
#define SRYWU "SORRY!无法进行融合，请选择其他Gashat!"
#define SPORT "Shakariki！Shakariki！Huh-hah！Shakariki Shakariki Spor～ts！"
#define RBT "打飞！突击！激突Punch！激突机器人！"
#define BEAT "Do-Do-DoReMiFa-So-La-Ti-Do！OK！DoReMiFa Bea～t～！"
#define CHBA "Giri Giri no Cham Cham Bara Bara！Giri Giri Chambara！"
#define JET "Jet！Jet！In the Sky！Jet！Jet！Jet Combat！"
#define DRAGO "D-D-Drago！Kni-Kni-Kni-Kni~ght！Dra-！Dra-！Drago Knight Hunter！Z！"

void Kuuga();//假面骑士空我
void Agito();//假面骑士亚极陀
void Ruki();//假面骑士龙骑
void Faiz();//假面骑士555
void Blade();//假面骑士剑
void Hibiki();//假面骑士响鬼
void Kabuto();//假面骑士甲斗
void Den_O();//假面骑士电王
void Kiva();//假面骑士牙
void Decade();//假面骑士帝骑
void Double();//假面骑士w
void OOO();//假面骑士ooo
void Fourze();//假面骑士fourze
//假面骑士wizard
void Wizard();
typedef  struct  wizard{
    long  ID;
    char  mode[15];
    char  color[10];
    long  power;
    
    struct  wizard  *  pNEXT;
}WIZARD;
void CreatWizard(WIZARD * p);
void PrintWizard(WIZARD * p);
void SaveWizard(WIZARD * p);


void Gaimu();//假面骑士铠武
void Drive();//假面骑士drive
void Ghost();//假面骑士ghost
//假面骑士ex-aid
void EX_Aid();
void GAshat();
void Chronicle();//
void chose1();//
void chose2();//
void Exaid1();//ex-aid
void Exaid2();//brave
void Exaid3();//sinpe
void Exaid4();//lazer
void Exaid5();//genm
void EX_AID();//
void BRAVE();
void SINPE();
void LAZER();
void GENM();
//假面骑士build
void Build();

#endif /* defined(__HeroGame__Rider__) */
