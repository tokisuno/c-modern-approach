#include <stdio.h>

int main(void)
{
    int check;
    int a, b, c, d, e, f, g, h, i, j, k;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);
    
    int first_sum = a+c+e+g+i+k;
    int second_sum = b+d+f+h+j;
    check = 9 - (((first_sum*3) + second_sum) / 10);
    printf("Check digit: %d\n", check);

    return 0;
}
