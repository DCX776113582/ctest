//
//  main.c
//  Chapter8
//
//  Created by mac on 18/1/12.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include "fruitsclub.h"
FRU *arrays[10]={NULL};
void fruits()
{
    Student_Info t;
loop:
    puts("菜单：1、添加  2、修改  3、查询  4、删除  5、打印  6、保存  7、读取  0、退出");
    printf("请输入：");
    scanf("%d",&t);
    switch (t) {
        case ADD添加:{
            static int i = 0;
            if (i<10) {
                arrays[i]=Add();
                i++;
            }
            puts("添加成功！");
            break;}
        case MODIFIED修改:
            MODIFIED(arrays);
            puts("修改成功！");
            break;
        case SEARCH查询:
            SEARCH(arrays);
            puts("查询成功！");
            break;
        case DELETE删除:
            DELETE(arrays);
            puts("删除成功！");
            break;
        case PRINT打印:
            PRINT(arrays);
            puts("打印成功！");
            break;
        case SAVE保存:
            save(arrays);
            puts("保存成功！");
            break;
        case LODE读取:
            load();
            puts("读取成功！");
            break;
        case EXIT退出:
            EXIT(arrays);
            if (arrays[0]==NULL) {
                printf("内存清除，退出系统成功！\n");
            }
            puts("退出成功！");
            break;
        default:puts("操作有误！\n");
            break;
    }
    char yes = 'y';
    getchar();
    printf("是否继续操作？(y或按任意键结束):");
    scanf("%c",&yes);
    if (yes == 'Y'||yes == 'y') {
        goto loop;
    }
    else
    {
        EXIT(arrays);
        if (arrays[0]==NULL) {
            printf("内存清除，退出系统成功！\n");
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    fruits();
    return 0;
}
