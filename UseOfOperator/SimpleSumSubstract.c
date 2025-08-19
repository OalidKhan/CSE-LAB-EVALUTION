#include <stdio.h>

int main()
{
    float PocketMoney,ProductCost,MoneyRecived,Remain;
    printf("Enter how much money you have(tk): ");
    scanf("%f",&PocketMoney);
    printf("Enter how much the product cost(tk): ");
    scanf("%f",&ProductCost);
    printf("Enter how much money your brother gives you(tk): ");
    scanf("%f",&MoneyRecived);

    Remain = (PocketMoney - ProductCost) + MoneyRecived;

    printf("Your remaining money: %.2f tk",Remain);
    return 0;
}

