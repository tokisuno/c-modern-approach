// There's an example in the textbook but I wrote my own based on the instructions instead.

#include <stdio.h>

int main(void)
{
    int check;
    int a, b, c, d, e, f, g, h, i, j, k;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &a);

    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &b, &c, &d, &e, &f);

    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &g, &h, &i, &j, &k);
    
    int first_sum = a+c+e+g+i+k;
    int second_sum = b+d+f+h+j;
    check = 9 - (((first_sum*3) + second_sum) / 10);
    printf("Check digit: %d\n", check);

    return 0;
}
