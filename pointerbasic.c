#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    int x=10;
    int *p = &x;
    printf("The value of x is %d \n",x);
    printf("The address of x is %p \n ",&x);
    printf("The address of p is %p \n ",&p);
    printf("The value of p is now %d \n ",*p);
    *p =20;
    printf("The updated value of p is %d \n",*p);
    return 0;
}