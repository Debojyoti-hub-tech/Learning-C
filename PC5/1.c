#include <stdio.h>

int average(int,int,int);

int average(int a, int b, int c){
    float avg = (a+b+c)/3;
    return avg ;
}

int main() {
    printf("Average of 3 nos are : %d", average(10,20,30));
    return 0;
}
