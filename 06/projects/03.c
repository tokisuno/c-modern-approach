#include <stdio.h>

int main(void)
{
    int m, n;
    int gcd;
    int remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    int m_og = m, n_og = n;

    // *** Use Euclid's algorithm ***
    for (;;) {
        if (n == 0) break;

        remainder = m % n;
        m = n;
        n = remainder;
    }
    gcd = m;

    printf("%d/%d\n", m_og/gcd, n_og/gcd);
    return 0;
}
