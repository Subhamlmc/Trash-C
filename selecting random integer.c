#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(0));

    char all_sets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$&*(){[]:>.<,}";
    int length = strlen(all_sets);

    char password[10]; 

    for (int i = 0; i < 9; i++) {
        password[i] = all_sets[rand() % length];
    }

    password[9] = '\0'; 
    printf("The randomly selected password is: %s\n", password);

    return 0;
}
