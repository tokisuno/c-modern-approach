#include <stdio.h>

#define TAX 0.05f

int main(void)
{
    float amount, taxed;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    taxed = amount + (amount * TAX);

    printf("Taxed amount: %.2f\n", taxed);

    return 0;
}
