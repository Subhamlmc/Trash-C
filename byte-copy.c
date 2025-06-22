#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>

int main() {
    int byte ;
    FILE *source ,*dest;
    source=fopen("C:\\Users\\Dell\\OneDrive\\Documents\\source.txt","rb");
    dest=fopen("C:\\Users\\Dell\\OneDrive\\Documents\\destination.txt","wb");
    if(source == NULL)
    {
        printf("Source FILE cannot be found !!");
        return 1;
    }
    if (dest == NULL)
    {
        printf("Destination File cannot be found to copy !! Please specify full path !!");
        printf("The file format to provide is given below!!");
        printf("C:\\Users\\Dell\\OneDrive\\Documents\\filename.txt");

    }
    while((byte=fgetc(source))!=EOF)
    {
      fputc(byte,dest);
    }
    printf("Contents transferred Successfully !!");
    fclose(source);
    fclose(dest);

    return 0;
}