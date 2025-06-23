#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    int *p= (int*)malloc(sizeof(int));
    *p=69;
    printf("%d \n",*p);
    free(p);
    return 0;
}