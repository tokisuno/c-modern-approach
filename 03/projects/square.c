#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    
    printf("Enter the numbers from 1-16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
            &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
    printf("%02d %02d %02d %02d\n", a, b, c, d);
    printf("%02d %02d %02d %02d\n", e, f, g, h);
    printf("%02d %02d %02d %02d\n", i, j, k, l);
    printf("%02d %02d %02d %02d\n", m, n, o, p);

    printf("Row sums: %d %d %d %d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p);
    printf("Column sums: %d %d %d %d\n", a+e+i+m, b+f+j+n, c+g+k+o, d+h+l+p);
    printf("Diagnoal sums: %d %d\n", a+f+k+p, d+g+j+m);

    return 0;
}
