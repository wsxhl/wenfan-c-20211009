#include <stdio.h>


int main()
{
    printf("请输入身高的英尺和英寸，如输入\"5 7\"表示5英尺7英寸：");

    double foot;
    double inch;

    printf("请输入身高的英尺和英寸：");
    scanf("%lf %lf",&foot,&inch);

    printf("你的身高是%f米",((foot+inch/12)*0.3048));


    return 0;
}//
// Created by xhlly on 2021/10/28.
//

