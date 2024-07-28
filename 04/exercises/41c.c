#include <stdio.h>

int main(void)
{
    int i = 7;
    int j = 8;
    int k = 9;
    printf("%d", (i + 10) % k / j);

    return 0;
}

//  1
