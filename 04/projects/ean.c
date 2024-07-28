#include <stdio.h>

int main(void)
{
    int check;
    int a, b, c, d, e, f, g, h, i, j, k, l;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
    
    int first_sum = b+d+f+h+j+l;
    int second_sum = a+c+e+g+i+k;

    check = 9 - ( ( ((first_sum*3) + second_sum) - 1) % 10);
    printf("Check digit: %d\n", check);

    return 0;
}
