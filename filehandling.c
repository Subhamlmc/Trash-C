#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    char str[1024];
    FILE *file;
    file=fopen("C:\\Users\\Dell\\OneDrive\\Documents\\subhamc.txt","r");
    if (file==NULL)
    {
        printf("FILE NOT FOUND !!");
        return 1;
    }
    while (fgets(str,sizeof(str),file))
    {
        printf("%s",str);
    }

    return 0;
}