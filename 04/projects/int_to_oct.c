#include <stdio.h>

int main(void)
{
    int input;
    int i1, i2, i3, i4, i5;
    int j1, j2, j3, j4, j5;

    printf("Enter a number between 0-32767: ");
    scanf("%d", &input);

    i5 = input % 8;
    j5 = input / 8;

    i4 = j5 % 8;
    j4 = j5 / 8;

    i3 = j4 % 8;
    j3 = j4 / 8;

    i2 = j3 % 8;
    j2 = j3 / 8;


    i1 = j2 % 8;
    j1 = j2 / 8;

    printf("%d%d%d%d%d\n", i1, i2, i3, i4, i5);

    return 0;
}
