#include <stdio.h>

int main()
{
    //初始化
     const int  MINOR =35;
     int age;

     //输入年龄
    printf("请输入你的年龄：\n");
    scanf("%d",&age);

    //输出比较大小
    printf("你的年龄是%d\n",age);
    if(age<MINOR){
        printf("年轻真是好呀！\n");
    } else{
        printf("年龄丰富你的精神世界！");
    }

    return 0;
}//
// Created by xhlly on 2021/10/31.
//

