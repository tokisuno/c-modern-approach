#include <stdio.h>

int main(void)
{
    int mm, dd, yyyy;
    int item_number;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%02d/%02d/%04d", &mm, &dd, &yyyy);

    printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-3d\t\t$%5.2f\t\t%-2d/%-2d/%-4d\n", item_number, unit_price, mm, dd, yyyy);

    return 0;
}
