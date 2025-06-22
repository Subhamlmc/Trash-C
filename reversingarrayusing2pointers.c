#include <stdio.h>

int main() {

    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    
 
    int *left = array;
    int *right = array + size - 1;

    while (left < right) {
        
        int temp = *left;  
        *left = *right;   
        *right = temp;     
        
       
        left++;   
        right--;  
    }
    
    
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d = %d\n", i + 1, array[i]);
    }
    
    return 0;
}
