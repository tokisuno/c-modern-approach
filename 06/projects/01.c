#include <stdio.h>

// - write a program that finds the largest in a series of numbers entered by the user.
// - the program must prompt the user to enter numbers one by one
// - when the user enters 0 or a negative number, the program must display the largest non-negative number entered
// - the numbers don't have to be integers
int main(void)
{
    float num, biggest;

    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num <= 0) break;

        if (num > biggest) {
            biggest = num;
        }
    }

    printf("Biggest number: %.2f", biggest);
    return 0;
}
