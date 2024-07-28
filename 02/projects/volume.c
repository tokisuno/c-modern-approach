#include <stdio.h>

#define PI 3.14159

int main(void)
{
    int radius;
    printf("Enter radius of sphere: ");
    scanf("%d", &radius);

    float volume = (4.0f/3.0f)*PI*(radius*radius*radius);

    printf("Volume: %.1f\n", volume);

    return 0;
}
