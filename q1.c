#include <stdio.h>
int main() {
    int show, price = 500;

    for(show = 1; show < 11; show++) {
        printf("show %d = %d\n", show, price);
        price += 50;
    }

    return 0;
}