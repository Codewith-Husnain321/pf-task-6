#include <stdio.h>

int main() {

    int priority[5], speed[5];
    int high = 0, medium = 0, normal = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter priority code for vehicle %d: ", i);
        scanf("%d", &priority[i]);

        printf("Enter speed for vehicle %d: ", i);
        scanf("%d", &speed[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        int left = priority[i] << 2;
        int right = priority[i] >> 1;

        printf("\nVehicle %d\n", i);
        printf("Original priority = %d\n", priority[i]);
        printf("Left shift = %d\n", left);
        printf("Right shift = %d\n", right);
        printf("Speed = %d km/h\n", speed[i]);

        if (left > 20 && speed[i] >= 80)
        {
            printf("Priority: High Priority\n");
            high++;
        }
        else if (left > 10 && speed[i] >= 60)
        {
            printf("Priority: Medium Priority\n");
            medium++;
        }
        else
        {
            printf("Priority: Normal Priority\n");
            normal++;
        }
    }

    printf("\nTotal High Priority = %d\n", high);
    printf("Total Medium Priority = %d\n", medium);
    printf("Total Normal Priority = %d\n", normal);

    return 0;
}