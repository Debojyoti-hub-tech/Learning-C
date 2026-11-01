#include <stdio.h>

int main() {
    int a[2][2], b[2][2], i, j ;
    
    printf("Enter the matrix 1:\n");
    for (i = 0; i<2; i++)
       for (j = 0; j<2; j++)
           scanf("%d", &a[i][j]);

    printf("Enter the matrix 2:\n");
    for (i = 0; i<2; i++)
       for (j = 0; j<2; j++)
            scanf("%d", &b[i][j]);

   
    //Matrices equality check ----
    int different = 0;
    for (i = 0; i<2; i++){
       for (j = 0; j<2; j++){
           if (a[i][j] != b[i][j]){
                 different++;
           }
       }
    }
    if (different == 0)
        printf("The matrices are equal.\n");
    else
        printf("The matrices are not equal.\n");

    return 0;
}
