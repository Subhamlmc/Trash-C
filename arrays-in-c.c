#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    int j[5]={10,20,30,40,50};
    printf("The array elements are given.");
    for (int i=0; i<=4; i++){
        printf("array[%d]=%d",i,j[i]);
    }
 return 0;
}