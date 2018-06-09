//
//  choose.c
//  HeroGame
//
//  Created by mac on 18/1/15.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include "choose.h"
#include "Rider.h"
#include "Ultraman.h"
#include "Supersentai.h"
#include "MetalHero.h"
void ULTRAMAN()
{
    printf("请选择你的奥特曼：\n");
    puts(Fen);
    printf("A:%s\nB:%s\nC:%s\nD:%s\nE:%s\nF:%s\nG:%s\nH:%s\nI:%s\nJ:%s\nK:%s\nL:%s\nM:%s\nN:%s\nO:%s\nP:%s\nQ:%s\nR:%s\nS:%s\nT:%s\nU:%s\nV:%s\nW:%s\nX:%s\nY:%s\nZ:%s\na:%s\nb:%s\n",ATMU,SEVEN,JACK,ACE,TARO,LEO,ASTRA,EIGHTY,Yullian,Great, Z_earth,NICE,TIGA,DYNA,GAIA,AGUL,COSMOS,JUSTICE,NEXUS,UMAX,MEBIUS,HIKARI,ZERO,GINGA,VICTORY,X,ORB,GEED);
    puts(Fen);
    printf("你选择的是：");
    char choose_ultraman;
    getchar();
    scanf("%c",&choose_ultraman);
    switch (choose_ultraman) {
        case 'A':Ultraman();break;
        case 'B':Ultraman_Seven();break;
        case 'C':Ultraman_Jack();break;
        case 'D':Ultraman_Ace();break;
        case 'E':Ultraman_Taro();break;
        case 'F':Ultraman_Leo();break;
        case 'G':Ultraman_Astra();break;
        case 'H':Ultraman_Eighty();break;
        case 'I':Ultraman_Yullian();break;
        case 'J':Ultraman_Jas();break;
        case 'K':Ultraman_Nice();break;
        case 'L':Ultraman_Great();break;
        case 'M':Ultraman_Tiga();break;
        case 'N':Ultraman_Dyna();break;
        case 'O':Ultraman_Gaia();break;
        case 'P':Ultraman_Agul();break;
        case 'Q':Ultraman_Cosmos();break;
        case 'R':Ultraman_Justice();break;
        case 'S':Ultraman_Nexus();break;
        case 'T':Ultraman_Max();break;
        case 'U':Ultraman_Mebius();break;
        case 'V':Ultraman_Hikari();break;
        case 'W':Ultraman_Zero();break;
        case 'X':Ultraman_Ginga();break;
        case 'Y':Ultraman_Victory();break;
        case 'Z':Ultraman_X();break;
        case 'a':Ultraman_Orb();break;
        case 'b':Ultraman_Geed();break;
        default:printf("您将选择神秘四奥：\n1、%s\n2、%s\n3、%s\n4、%s\n",NOA,LEGEND,KING,SAGA);
            break;
    }
}
void SUPER_SENTAI()
{
    puts("战队如下，请认真查看！");
    puts("------------------------------------------------");
    puts("            1:秘密战队五连者");
    puts("            2:JAKQ电击队");
    puts("            3:战斗狂热J");
    puts("            4:电子战队电磁人");
    puts("            5:太阳战队太阳火神");
    puts("            6:大战队风镜V");
    puts("            7:科学战队炸药人");
    puts("            8:超电子生化人");
    puts("            9:电击战队变化人");
    puts("            10:超新星闪光人");
    puts("            11:光战队覆面人");
    puts("            12:超兽战队生命人");
    puts("            13:高速战队涡轮连者");
    puts("            14:地球战队五人组");
    puts("            15:鸟人战队喷射人");
    puts("            16:恐龙战队兽连者");
    puts("            17:五星战队大连者");
    puts("            18:忍者战队隐连者");
    puts("            19:超力战队王连者");
    puts("            20:激走战队车连者");
    puts("            21:电磁战队百万连者");
    puts("            22:星兽战队银河人");
    puts("            23:救急战队GOGO-V");
    puts("            24:未来战队时间连者");
    puts("            25:百兽战队牙吠连者");
    puts("            26:忍风战队破里剑者");
    puts("            27:暴龙战队爆连者");
    puts("            28:特搜战队刑事连者");
    puts("            29:魔法战队魔法连者");
    puts("            30:轰轰战队冒险者");
    puts("            31:兽拳战队激气连者");
    puts("            32:炎神战队轰音者");
    puts("            33:侍战队真剑者");
    puts("            34:天装战队护星者");
    puts("            35:海贼战队豪快者");
    puts("            36:特命战队Go-Buster");
    puts("            37:兽电战队强龙者");
    puts("            38:列车战队特急者");
    puts("            39:手里剑战队忍忍者");
    puts("            40:动物战队兽王者");
    puts("            41:宇宙战队球连者");
    puts("------------------------------------------------");
    printf("请选择你的战队：");
    int choose_ranger;
    scanf("%d",&choose_ranger);
    if (choose_ranger>=1||choose_ranger<=41) {
        switch (choose_ranger) {
            case 1:Himitsu_Sentai_Gorenger();break;
            case 2:JAKQ_shock_team();break;
            case 3:Battle_frenzy_J();break;
            case 4:Denshi_Sentai_Denziman();break;
            case 5:Taiyo_Sentai_Sun_Vulcan();break;
            case 6:Dai_Sentai_Goggle_V();break;
            case 7:Kagaku_Sentai_Dynaman();break;
            case 8:Choudenshi_Bioman();break;
            case 9:Change_people_shock_troopers();break;
            case 10:Choushinsei_Flashman();break;
            case 11:Hikari_Sentai_Maskman();break;
            case 12:Choujuu_Sentai_Liveman();break;
            case 13:Kousoku_Sentai_Turboranger();break;
            case 14:Chikyu_Sentai_Fiveman();break;
            case 15:Chōjin_Sentai_Jetman();break;
            case 16:Kyōryū_Sentai_Zyuranger();break;
            case 17:Gosei_Sentai_Dairanger();break;
            case 18:Ninja_clan_hidden_even();break;
            case 19:Chōriki_Sentai_Ohranger();break;
            case 20:Gekisou_Sentai_Carranger();break;
            case 21:Electromagnetic_clan_million_even();break;
            case 22:Seijuu_Sentai_Gingaman();break;
            case 23:Emergency_teams_GOGO_V();break;
            case 24:The_team_time_even();break;
            case 25:Hyakujuu_Sentai_Gaoranger();break;
            case 26:Ninpuu_Sentai_Hurricaneger();break;
            case 27:Bakuryū_Sentai_Abaranger();break;
            case 28:Tokusou_Sentai_Dekaranger();break;
            case 29:Mahou_Sentai_Magiranger();break;
            case 30:GoGo_Sentai_Boukenger();break;
            case 31:Juken_Sentai_Gekiranger();break;
            case 32:Engine_Sentai_Go_onger();break;
            case 33:Shi_clan_a_sword();break;
            case 34:Tensou_Sentai_Goseiger();break;
            case 35:Kaizoku_Sentai_Gokaiger();break;
            case 36:Go_Busters_troopers();break;
            case 37:Zyuden_Sentai_Kyoryuger();break;
            case 38:Ressha_Sentai_ToQger();break;
            case 39:Sword_in_hand_team_ninja();break;
            case 40:Animal_team_bm();break;
            case 41:The_team_ball_even();break;
            default:
                break;
        }
    }
}
void KARMEN_RIDER()
{
    printf("请选择你的骑士：\n");
    puts("********************************************");
    puts("*                                          *");
    puts("*          A:karmen rider Kuuga            *");
    puts("*          B:karmen rider Agito            *");
    puts("*          C:karmen rider Ruki             *");
    puts("*          D:karmen rider Faiz             *");
    puts("*          E:karmen rider Blade            *");
    puts("*          F:karmen rider Hibiki           *");
    puts("*          G:karmen rider Kabuto           *");
    puts("*          H:karmen rider Den_O            *");
    puts("*          I:karmen rider Kiva             *");
    puts("*          J:karmen rider Decade           *");
    puts("*          K:karmen rider Double           *");
    puts("*          L:karmen rider OOO              *");
    puts("*          M:karmen rider Fourze           *");
    puts("*          N:karmen rider Wizard           *");
    puts("*          O:karmen rider Gaimu            *");
    puts("*          P:karmen rider Drive            *");
    puts("*          Q:karmen rider Ghost            *");
    puts("*          R:karmen rider EX-Aid           *");
    puts("*          S:karmen rider Build            *");
    puts("*                                          *");
    puts("********************************************");
    printf("请选择：");
    char choose_rider;
    getchar();
    scanf("%c",&choose_rider);
    switch (choose_rider) {
        case 'A':Kuuga();break;
        case 'B':Agito();break;
        case 'C':Ruki();break;
        case 'D':Faiz();break;
        case 'E':Blade();break;
        case 'F':Hibiki();break;
        case 'G':Kabuto();break;
        case 'H':Den_O();break;
        case 'I':Kiva();break;
        case 'J':Decade();break;
        case 'K':Double();break;
        case 'L':OOO();break;
        case 'M':Fourze();break;
        case 'N':Wizard();break;
        case 'O':Gaimu();break;
        case 'P':Drive();break;
        case 'Q':Ghost();break;
        case 'R':EX_Aid();break;
        case 'S':Build();break;
        default:printf("退出骑士选择\n");
            break;
    }
}
void METAL_HERO()
{

}