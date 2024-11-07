#include <stdio.h>

int main(void)
{
    int input, square;

    printf("Enter a number: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        if ((i * i) % 2 == 0 && (i * i) <= input) {
            printf("%d\n", i*i);
        }
    }

    return 0;
}
