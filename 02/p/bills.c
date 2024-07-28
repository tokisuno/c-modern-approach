#include <stdio.h>

int main(void)
{
    int amount;
    int twenty, ten, five, one;
    twenty = ten = five = one = 0;

    printf("Enter dollar amount: ");
    scanf("%d", &amount);
    
    twenty = (amount - (amount % 20)) / 20;
    amount = amount - ((amount % 20)*20);

    ten = (amount - (amount % 10)) / 10;
    amount = amount - ((amount % 10)*10);

    five = (amount - (amount % 5)) / 5;
    amount = amount - ((amount % 5)*5);

    one = amount;

    printf("$20 Bills: %d", twenty);
    printf("$10 Bills: %d", ten   );
    printf(" $5 Bills: %d", five  );
    printf(" $1 Bills: %d", one   );

    return 0;
}
