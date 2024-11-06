#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }

    printf("\n----------\n");

    int j = 9384;
    do {
        printf("%d ", j);
        j /= 10;
    } while (j > 0);

    printf("\n----------\n");

    /*for (i = 5, j = i - 1; i > 0, j > 0; --j, j = i - 1)*/
    /*    printf("%d", i);*/

    return 0;
}
