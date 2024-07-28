#include <stdio.h>
int equation(int x);

int main(void)
{
    int input; 
    printf("Enter value for X: ");
    scanf("%d", &input);

    printf("x = %d = %d\n", input, equation(input));
    return 0;
}

int equation(int x) {
    int answer;

    answer = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + (7*x) - 6;

    return answer;
}
