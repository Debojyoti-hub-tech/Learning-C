#include <stdio.h>

// A

int main() {
    int len = 10;
    int bdh = 20;
    int area = len * bdh;
    printf("Area of the rectangle: %d ", area);
    return 0;
}

// B 

int main() {
    int len, bdh;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &len);
    printf("Enter the length of the rectangle: ");
    scanf("%d", &bdh);
    int area = len * bdh;
    printf("Area of the rectangle: %d ", area);
    return 0;
}

