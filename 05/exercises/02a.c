#include <stdio.h>

int main(void)
{
    int i, j;
    i = 10;
    j = 5;

    printf("%d\n", !(i < j));
    // Unsure if it wants NOT i or NOT (i < j)

    return 0;
}
