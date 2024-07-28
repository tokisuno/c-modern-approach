#include <stdio.h>

int main(void)
{
    float x = 123.456789123f;

    // (a)
    printf("%-8.1e\n", x);
    // (b)
    printf("%10.6e\n", x);
    // (c)
    printf("%-8.3f\n", x);
    // (d)
    printf("%6.f\n", x);


    return 0;
}
