#include <Stdio.h>

void swap (int *x, int *y){

    int temp;
    temp = *x;
    *y = temp;
    *x = *y;
}

int main(){
    int b = 4;  // a is 3 and b is 4
    int a = 3;
    swap(&a, &b);
    printf("%d %d",a,b);
    return 0;   //now a is 4 and b is 3
}