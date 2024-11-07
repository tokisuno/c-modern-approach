#include <stdio.h>

// write a program that prints a one-month calendar
// user specifies the number of days in the month
// user specifies the day of the week the month begins on

int main(void)
{
    int days, start;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    return 0;
}
