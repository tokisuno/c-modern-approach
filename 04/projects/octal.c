#include <stdio.h>
#include <math.h>

int main(void) {
    int input;

    int octal = 0;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);

    for (int i = 0; i < 8; i++) {
        octal = octal + (input % 8) * pow(10, i);
        if (input / 8 == 0) break;
        input /= 8;
    }

    printf("octal: %.8d", octal);
    return 0;
}
