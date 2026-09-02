#include <stdio.h>

int main() {
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++); //Evaluation order right to left   
    // 6 6 4
    return 0;
}
