#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 2;
    int k = 3;
    printf("%d", (i + 5) & (j + 2) / k);

    return 0;
}

//  0
