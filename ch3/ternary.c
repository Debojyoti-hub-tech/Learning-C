#include <stdio.h>

int main() {
    int a = 30, b = 32;
    // condition ? expression-if-true : expression-if-false // "?" and ":" are called Ternary Operators

    a>b?printf("a is greater"): printf("b is greater");
    return 0;
}
