#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    int temp;
    int x=10;
    int y=20;
    int *p1=&x;
    int *p2=&y;
    printf("The previous value of x is %d \n",x);
    printf("The previous value of y is %d \n",y);
    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("The new value of x is %d \n",*p1);
    printf("The new value of x is %d \n",*p2);

    return 0;
}