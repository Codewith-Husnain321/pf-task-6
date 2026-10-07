#include <stdio.h>
#include <ctype.h>

int main() {

    char username[21];
    int vowels = 0, consonants = 0;

    printf("Enter username: ");
    scanf("%20s", username);

    for (int i = 0; username[i] != '\0'; i++)
    {
        char ch = username[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }

        username[i] = toupper(username[i]);
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Uppercase username = %s\n", username);

    return 0;
}