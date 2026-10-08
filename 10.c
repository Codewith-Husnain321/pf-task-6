#include <stdio.h>

int main() {
    char username[21];
    int vowelCount = 0, constCount = 0;

    printf("Enter username: ");
    scanf("%20s", username);

    for (int i = 0; username[i] != '\0'; i++) {

        if (username[i] == 'a' || username[i] == 'e' ||
            username[i] == 'i' || username[i] == 'o' ||
            username[i] == 'u' ||
            username[i] == 'A' || username[i] == 'E' ||
            username[i] == 'I' || username[i] == 'O' ||
            username[i] == 'U') {

            vowelCount++;
        }

        else if ((username[i] >= 'a' && username[i] <= 'z') ||
                 (username[i] >= 'A' && username[i] <= 'Z')) {

            constCount++;
        }

        if (username[i] >= 'a' && username[i] <= 'z') {
            username[i] = username[i] - 32;
        }
    }

    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", constCount);
    printf("Uppercase username: %s\n", username);

    return 0;
}
