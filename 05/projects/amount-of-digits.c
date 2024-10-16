#include <stdio.h>

int main(void) {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);
    if (input < 10)
        printf("The number %d has 1 digit\n", input);
    if (input >= 10 && input <= 99)
        printf("The number %d has 2 digits\n", input);
    if (input >= 100 && input <= 999)
        printf("The number %d has 3 digits\n", input);

    return 0;
}
