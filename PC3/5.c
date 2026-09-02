#include <stdio.h>

int main() {
    char ch = 'g';
    printf("The character is %c\n", ch);
    printf("Val of the character %d\n", ch);
    if (ch>=97 && ch<= 122 ){
        printf("Character is lowercase\n");
    }
    else{
        printf("Character is not lowercase\n");
    }
    return 0;
}
