#include <stdio.h>

int factorial(int);

int factorial(int x){
    int f;
    if (x == 0 || x == 1) {
        return 1; // a program to calculate factorial using recursion
    } else {
        f = x * factorial(x - 1);
    }
    return f;

}

int main() {
    printf(factorial(5));
    return 0;
}
