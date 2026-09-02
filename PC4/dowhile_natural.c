#include <stdio.h>

int main() {
    int i=1;
    int sum= 0;
    do{
        sum+=i*8;
        i++;
    } while(i<=10);

    printf("Sum of 8th multiplication table  no. %d",sum);
    return 0;
}
