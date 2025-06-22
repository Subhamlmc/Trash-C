#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char filename[100];
    char buffer[1024];
    FILE *file;

    printf("Enter the name of file (or specify full path if error raised): ");
    fgets(filename, sizeof(filename), stdin);

    filename[strcspn(filename, "\n")] = 0;

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char word[50];
    printf("Enter the particular word you want to search for: ");
    scanf("%s", word);

    int count = 0;
    int wordIndex = 1;  
    int found = 0;

    while (fgets(buffer, sizeof(buffer), file)) {
        char *token = strtok(buffer, " \t\n\r");
        while (token != NULL) {
            if (strcmp(token, word) == 0) {
                printf("Word found at position --%d--\n", wordIndex);
                found = 1;
                count++;
            }
            wordIndex++;
            token = strtok(NULL, " \t\n\r");
        }
    }

    if (!found) {
        printf("Word not found in the file.\n");
    } else {
        printf("Total occurrences: %d\n", count);
    }

    fclose(file);
    return 0;
}
