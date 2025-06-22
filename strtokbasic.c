#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    char ask_comma_seperated_values[100];
    int count=0; 
    printf("Enter the comma seperated value (eg: apple,banana,cat):");
    scanf("%s",ask_comma_seperated_values);
    char *token=strtok(ask_comma_seperated_values,",");
    while (token !=NULL)
    {
       printf("TOKEN: %s \n",token);
       token=strtok(NULL,",");
       count++;
    }
    printf("The total number of csvs are :%d",count);
    return 0;
}