#include <stdio.h>

int main() {

    float temp[3], hottest, coldest, second;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter temperature after %d hours: ", i * 8);
        scanf("%f", &temp[i]);
    }

    hottest = temp[0];
    coldest = temp[0];

    for (int i = 0; i < 3; i++)
    {
        if (temp[i] > hottest)
        {
            hottest = temp[i];
        }

        if (temp[i] < coldest)
        {
            coldest = temp[i];
        }
    }

    second = temp[0];

    for (int i = 0; i < 3; i++)
    {
        if (temp[i] > second && temp[i] < hottest)
        {
            second = temp[i];
        }
    }

    printf("\nHottest temperature = %.2f\n", hottest);
    printf("Coldest temperature = %.2f\n", coldest);
    printf("Second hottest temperature = %.2f\n", second);

    return 0;
}