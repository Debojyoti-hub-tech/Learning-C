#include <stdio.h>

// int sum(int* a,int* b);

int sum(int* a, int* b){
    *a =6;
    return (*a + *b);
}

int main() {
    int x=1, y=8;
    printf("The sum is : %d\n", sum(&x,&y));  
    // As the address of x passes so the value of x is changed
}