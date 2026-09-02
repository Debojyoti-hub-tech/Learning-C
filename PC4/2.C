#include <stdio.h>

int main() {
    int i = 10;
    printf("The multiplication table of %d in reverse order is :\n",i);
    
    for (int x=10; x>0; x--) {
        printf("%d * %d : %d\n", i, x, (i*x));
    }
    return 0;
}
