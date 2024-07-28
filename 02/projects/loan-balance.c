#include <stdio.h>

int main(void)
{
    float loan, interest, payment, monthly_interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter payment payment: ");
    scanf("%f", &payment);

    float balance = loan; // for code readability
    for (int i = 1; i <= 3; i++) {
        monthly_interest_rate = (interest/100)/12;
        balance = (balance - payment) + (balance * monthly_interest_rate);
        printf("==========\n");
        printf("Balance remaining: %.2f\n", balance);
        printf("==========\n");
    }

    return 0;
}
