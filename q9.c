#include <stdio.h>

int main() {

    int stock[10], search, found = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter stock for shelf %d: ", i);
        scanf("%d", &stock[i]);
    }

    printf("\nReverse order:\n");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", stock[i]);
    }

    printf("\n\nEnter stock count to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++)
    {
        if (stock[i] == search)
        {
            printf("Stock found at index %d\n", i);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Stock count does not exist.\n");
    }

    return 0;
}