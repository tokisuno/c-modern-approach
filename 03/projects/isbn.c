#include <stdio.h>

int main(void)
{
    int gs1, gi, pc, in, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &gi, &pc, &in, &check);

    printf("\nGS1 prefix: %d", gs1);
    printf("\nGroup identifier: %d", gi);
    printf("\nPublisher code: %d", pc);
    printf("\nItem number: %d", in);
    printf("\nCheck digit: %d\n", check);

    return 0;
}
