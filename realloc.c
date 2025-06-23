#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int x;
    printf("Enter how many elements you want to add: ");
    scanf("%d", &x);

    int *array = (int *)malloc(sizeof(int) * x);
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    char message[10];
    printf("Do you wish to add more elements (yes/y)? ");
    scanf("%s", message);

    if (strcmp(message, "yes") == 0 || strcmp(message, "y") == 0) {
        int y;
        printf("Enter how many more elements to add: ");
        scanf("%d", &y);

        int new_total = x + y;
        array = (int *)realloc(array, sizeof(int) * new_total);
        if (array == NULL) {
            printf("Memory reallocation failed!\n");
            return 1;
        }

        for (int i = x; i < new_total; i++) {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &array[i]);
        }

        x = new_total; 
    }

    printf("All elements:\n");
    for (int i = 0; i < x; i++) {
        printf("Element %d = %d\n", i + 1, array[i]);
    }

    free(array);
    return 0;
}
