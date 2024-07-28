#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("Enter a date: ");
    scanf("%02d/%02d/%d", &month, &day, &year);

    printf("You entered date %d%02d%02d\n", year, month, day);

    return 0;
}
