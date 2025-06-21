#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1024];
    char str_copy[1024];
    char bas[1024];
    char store[100][50];
    int n;
    int i = 0;

    printf("Enter the number of bad word you want to add to replace: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) { 
        printf("Enter word-%d \n :", i);
        scanf("%s", bas);
        strcpy(store[i], bas);
    }

    getchar(); 

    printf("Enter the paragraph: ");
    fgets(str, sizeof(str), stdin);

    strcpy(str_copy, str); 

    char *token = strtok(str, " \n");
    int count = 0;

    while (token != NULL) {
        count++;
        token = strtok(NULL, " \n");
    }

    token = strtok(str_copy, " \n"); 

    while (token != NULL) {
        int found = 0;
        for (i = 0; i < n; i++) {
            if (strcasecmp(token, store[i]) == 0) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("*********** ");
        } else {
            printf("%s ", token);
        }

        token = strtok(NULL, " \n");
    }

    printf("\n");
    return 0;
}
