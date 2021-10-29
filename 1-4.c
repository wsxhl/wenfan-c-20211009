//
// Created by xhlly on 2021/10/23.
//

#include <stdio.h>


int main()
{
    const int AMOUNT = 100;
    int price = 0;

    printf("请输入价格：");
    scanf("%d",&price);

    int change = AMOUNT-price;

    printf("找您%d元",change);



    return 0;
}