#include <stdio.h>

int main(void) {
    int hours, minutes;
    int is_pm = 0;
    printf("Enter a 24 hour time: ");
    scanf("%d :%d", &hours, &minutes);

    if (hours > 12 && hours < 24) {
        hours -= 12;
    } else if (hours == 24 || hours == 0) {
        hours = 12;
        is_pm = 1;
    } else {
        is_pm = 1;
    }

    if (is_pm == 0) {
        printf("%.2d:%.2d PM\n", hours, minutes);
    } else {
        printf("%.2d:%.2d AM\n", hours, minutes);
    }

    return 0;
}
