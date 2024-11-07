#include <stdio.h>
float commission_price(float value)
{
    float commission;

    if (value == 0) return 0;

    if (value < 2500.00f) {
        commission = 30.00f + 0.017f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + 0.0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + 0.0034f * value;
    } else if (value < 50000.00f) {
        commission = 100.00f + 0.0022f * value;
    } else if (value < 500000.00f) {
        commission = 155.00f + 0.0011f * value;
    } else {
        commission = 255.00f + 0.0009f * value;
    }

    if (value < 39.00f) {
        commission = 39.99f;
    }

    return commission;
}

int main(void)
{
    float commission, value;


    for (;;) {
        printf("Enter value of trade: ");
        scanf("%f", &value);

        commission = commission_price(value);
        if (commission == 0) break;

        printf("Commission: $%.2f\n", commission);
    }
    printf("Goodbye!\n");


    return 0;
}
