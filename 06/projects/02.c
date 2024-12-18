#include <stdio.h>

int main(void)
{
    int m, n;
    int gcd;
    int remainder;

    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &m, &n);

    // *** Use Euclid's algorithm ***
    for (;;) {
        if (n == 0) break;

        remainder = m % n;
        m = n;
        n = remainder;
    }
    gcd = m;

    printf("%d\n", gcd);
    return 0;
}
