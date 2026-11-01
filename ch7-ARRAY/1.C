#include <stdio.h>

int main()
{
    int marks[2][3] = {
        {7, 8, 2},
        {4, 9, 2}
    };
    printf("%d", marks[1][1]);   // prints 8
    return 0;
}
