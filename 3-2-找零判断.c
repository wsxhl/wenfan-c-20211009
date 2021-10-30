#include <stdio.h>

int main()
{
    //初始化
    int price = 0;
    int bill  = 0;

    //输入金额
    printf("请输入购买金额；\n");
    scanf("%d",&price);

    printf("请输入票面金额；\n");
    scanf("%d",&bill);


    //找零
    if(bill >=price){
        printf("找您%d元",bill-price);
    }
    else{
        printf("对不起你的余额不够了");
    }


    return 0;
}//
// Created by xhlly on 2021/10/30.
//

