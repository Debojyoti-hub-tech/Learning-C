#include <stdio.h>
// Factorial of a given no.

int main() {
    int prd =1;
    for (int i =5; i> 0; i--){
        prd *= i;
    }
    printf("Factorial: %d\n", prd);
    return 0;
}

int main(){
    int prd = 1;
    int i = 5;
    while (i>0){
        prd*=i;
        i--;
    }
    printf("Factorial: %d\n", prd);
    return  0;

}
