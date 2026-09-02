#include <stdio.h>

int main() {
    int i = 67;
    int* j = &i; //POINTERS
    int** k = &j;
    int*** h = &k;

    printf("The address : %d\n", i);    
    printf("The address : %d\n", j);    
    printf("The address : %d\n", h);     
    
    return 0;
}
