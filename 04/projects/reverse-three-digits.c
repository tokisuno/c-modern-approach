#include <stdio.h>

int main(void) {
    int input, left, middle, right;

    printf("Enter a three-digit number: ");
    scanf("%d", &input);

    left = input % 10;
    middle = (input / 10) % 10;
    right = (input / 10) / 10;

    printf("%1d%1d%1d", left, middle, right);
    return 0;
}
