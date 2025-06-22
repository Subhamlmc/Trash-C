#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    char str[1024];
    int count=0;
    printf("Enter the paragraph and this program will count the total number of words and character :");
    fgets(str , sizeof(str),stdin);
    char *token=strtok(str," ");
    while (token !=NULL)
    {
     count++;
     token=strtok(NULL," ");
    }
    printf("The total number of words in this paragraph is = %d \n",count);
    int i=0;
    int char_count=0;
    int line_count=0;
    for (i ; i != '\n'; i++)
    {
        if (str[i] != '\n')
        {
            char_count++;
        }
        if (str[i] != '\0')
        { 
          line_count++;

        }
    }
    printf("The total number of character is = %d \n ",char_count);
    printf("The total number of line is =%d \n",line_count);
    return 0;
}