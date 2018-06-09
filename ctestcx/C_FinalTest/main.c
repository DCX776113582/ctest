//
//  main.c
//  C_FinalTest
//
//  Created by mac on 18/1/15.
//  Copyright (c) 2018年 duanchuanxin. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

/*void eunm()
{
    puts("******************************");
    puts("*         1:create           *");
    puts("*         2:print            *");
    puts("*         3:save             *");
    puts("*         4:load             *");
    puts("*         5:exit             *");
    puts("******************************");
    printf("Please choose:");
    int choose;
    scanf("%d",&choose);
    switch (choose) {
        case 1:
            create();
            break;
        case 2:
            print();
            break;
        case 3:
            save();
            break;
        case 4:
            load();
            break;
        case 5:
            Exit();
            break;
        default:
            break;
    }
}
 */
typedef struct{
    int ID;
    int math;
    int English;
    int C;
    int avargrade;
    char name[20];
}Stu;
void test100(){
    FILE*fp;
    Stu stu[5];
    int i,avargrade=0;
    printf("请输入5个同学的信息：学生号，姓名，3门成绩:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d %s %d %d %d",&(stu[i].ID),stu[i].name,&(stu[i].math),&(stu[i].English),&(stu[i].C));
        stu[i].avargrade=(stu[i].math+stu[i].English+stu[i].C)/3;
    }
    
    if((fp=fopen("stud","w"))==NULL)
    {
        printf("error :cannot open file!\n");
        exit(0);
    }
    for(i=0;i<5;i++)
        fprintf(fp,"%d %s %d %d %d %d\n",stu[i].ID,stu[i].name,stu[i].math,stu[i].English,
                stu[i].C,stu[i].avargrade);
    
    fclose(fp);
    // system("pause");
}

int main(int argc, const char * argv[]) {
    test100();
    return 0;
}
