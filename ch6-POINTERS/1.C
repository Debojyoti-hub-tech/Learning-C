#include <stdio.h>

int main() {
    // int i = 67;
    // int* j = &i; //POINTERS
    // int k = 58;

    // printf("The address : %d\n", i);    
    // printf("The address : %d\n", j);    
    // printf("The address : %d\n", k);    
    // printf("The value of address j is : %d\n", *(&i));  
    
    char l =  'A';
    char *j = &l;
    float k = 5.232;
    float* k1 = &k;
    printf("The address : %d\n", j);
    printf("The address : %f\n", *(k1));
}