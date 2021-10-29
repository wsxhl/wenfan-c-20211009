#include <stdio.h>


int main()
{
    int hour1,minute1,hour2,minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int c = hour1*60+minute1-(hour2*60+minute2);
    int a = c/60;
    int b = c%60;


    printf("%d小时%d分和%d小时%d分之间的时差是%d小时%d分",hour1,minute1,hour2,minute2,a,b);

    return 0;
}//
// Created by xhlly on 2021/10/29.
//

