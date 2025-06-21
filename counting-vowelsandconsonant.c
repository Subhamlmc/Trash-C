#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    char *p = str;
    int vowel_count = 0;
    int cons_count = 0;

    for (; *p != '\0'; p++) {
        char ch = tolower(*p);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowel_count++;
            } else {
                cons_count++;
            }
        }
    }

    printf("Vowels: %d\n", vowel_count);
    printf("Consonants: %d\n", cons_count);

    return 0;
}
