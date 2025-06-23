#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    int arr[5]={1,2,3,4,5};
    printf("Before memset function applied !: \n");
    for (int i=0; i<5; i++)
    {
        printf("%d \n",arr[i]);

    }
    printf("After applying memset fuction");
    memset(arr, 0, sizeof(arr));
    for (int j=0; j<=5; j++)
    {
        printf("%d \n",arr[j]);
    }
    return 0;
}