//
//  main.c
//  C_Project
//
//  Created by mac on 18/1/16.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include "stuInfo.h"
/*主函数分别实现菜单式操作：调用创建、保存、打印、显示函数进行测试。（说明：如果采用动态内存管理，记得释放内存）（10分）
 打开终端进行测试，并执行生成对应的预处理阶段、编译阶段、汇编阶段、链接阶段、执行阶段的相关文件（5分）。*/
int main(int argc, const char * argv[]) {
    int choose;
    char yes;
loop:
    do
    {
        puts("**********************************");
        puts("*              1、创建            *");
        puts("*              2、保存            *");
        puts("*              3、读取            *");
        puts("*              4、打印            *");
        puts("**********************************");
        printf("请选择：");
        scanf("%d",&choose);
        switch (choose) {
            case 1:
                create(5);
                puts("创建成功！");
                break;
            case 2:
                save();
                puts("保存成功！");
                break;
            case 3:
                load();
                puts("读取成功！");
                break;
            case 4:
                showStudentInfo();
                puts("打印成功！");
                break;
            default:puts("数据出错，正在退出");
                break;
        }
        printf("是否继续操作(y键继续，其他键退出)：");
        getchar();
        scanf("%c",&yes);
        if (yes=='y') {
            goto loop;
        }
        else
        {
            break;
        }
    }while(1);
    return 0;
}
