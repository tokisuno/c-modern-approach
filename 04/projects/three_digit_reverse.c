#include <stdio.h>

int main(void)
{
    int input, first, centre, last;
    printf("Enter a three-digit number: ");
    scanf("%d", &input);

    first = ((input/10)/ 10) % 10; 
    centre = (input/10) % 10;
    last = input % 10;

    printf("The reversal is: %d%d%d\n", last, centre, first);

    return 0;
}
