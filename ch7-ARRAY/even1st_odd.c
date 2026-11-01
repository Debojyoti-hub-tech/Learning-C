#include <stdio.h>
int main(){
    int a[10];
    printf("Enter the elements:\n");
    for (int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    printf("Printing Even nos. then odd:\n");

    for (int i= 0; i<10;i++){
        if (a[i]%2 ==0){
            printf("%d ",a[i]);
        }
    }

    for (int i= 0; i<10;i++){
        if (a[i]%2 !=0){
            printf("%d ",a[i]);
        }
    }
}