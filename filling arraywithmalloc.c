#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    int x;
    printf("Enter the number of elements you want to allocate :");
    scanf("%d",&x);
    int *array=(int *)malloc(sizeof(int) *x);
    if (array==NULL)
    {
        printf("Memeory allocation failed !!");
    }
    for (int i=0; i<x; i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&array[i]);

    }
    for (int i=0;i<x;i++)
    {
      printf("Element %d =%d\n",i+1,array[i]);
    }
    return 0;
}