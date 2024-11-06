#include <stdio.h>

int main(void)
{
    int digits = 0, n;

    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has % digit(s).\n", digits);

    return 0;
}
