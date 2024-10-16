#include <stdio.h>

int main(void) {
    int input, left, right;

    printf("Enter a two-digit number: ");
    scanf("%d", &input);

    left = input % 10;
    right = input / 10;

    printf("%1d%1d", left, right);
    return 0;
}
