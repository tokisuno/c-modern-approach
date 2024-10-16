#include <stdio.h>

int main(void) {
    int left, middle, right;

    printf("Input a three-digit number: ");
    scanf("%1d%1d%1d", &right, &middle, &left);
    printf("%1d%1d%1d", left, middle, right);

    return 0;
}
