#include <stdio.h>

int main() {
    int years;
    double money, factor;

    printf("Enter initial money: ");
    scanf("%lf", &money);

    printf("Enter growth factor: ");
    scanf("%lf", &factor);

    printf("Enter number of years: ");
    scanf("%d", &years);

    for (int i = 1; i <= years; i++) {
        money = money * factor;
    }

    printf("Final amount = %.2f\n", money);

    return 0;
}