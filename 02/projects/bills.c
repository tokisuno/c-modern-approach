#include <stdio.h>

int main(void)
{
    int amount, twenty, ten, five, one;
    twenty = ten = five = one = 0;

    printf("Enter dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20;
    amount -= (twenty*20);
    ten = amount / 10;
    amount -= (ten*10);
    five = amount / 5;
    amount -= (five*5);
    one = amount / 1;

    printf("$20: %d\n", twenty);
    printf("$10: %d\n", ten);
    printf(" $5: %d\n", five);
    printf(" $1: %d\n", one);
    
    return 0;
}
