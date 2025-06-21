#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    char str[1024];
    int wordwisecount=0;
    int inside_token=0;
    int count=0;
    int i;
    printf("Enter the words seperated by delimiters (eg: I am subham, I am hero! I like foot.):") ;
    fgets(str, sizeof(str), stdin);
    char *token=strtok(str,".!?");
    while(token != NULL){
        count++;
    }
    for (i=0 ; str[i] != '.' || "!" || "?" ; i++ ) {
        wordwisecount++;
    while  (str[i] !=  '.' || "!" || "?" )
    {
       inside_token++;
    }


    }
    printf("The total number of words in this paragraph is %d \n",count);
    printf("The total number of character in segment[i] is %d \n ",i,wordwisecount);
    printf("The total number of word is segment[i] is %d \n ",i,inside_token);
    return 0;
}