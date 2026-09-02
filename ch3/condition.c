#include <stdio.h>

// If else if else ladder
int main() {
    int age =65;
    if (age > 60){
        printf("Your can drive and senior citizen");
    }
    else if(age> 18){   //elif of python <-- 
        printf("You can drive");
    }
    else{
        printf("You can not drive");
    }
    return 0;
}
