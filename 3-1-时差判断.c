#include <stdio.h>

int main()
{
    int hour1,minute1,hour2,minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int ih = hour1-hour2;
    int im = minute1-minute2;


    if(im<0){
        im = minute1-minute2+60;
        ih = ih-1;
    }


    printf("%d小时%d分和%d小时%d分之间的时差是%d小时%d分",hour1,minute1,hour2,minute2,ih,im);

    return 0;
}//
// Created by xhlly on 2021/10/29.
//

