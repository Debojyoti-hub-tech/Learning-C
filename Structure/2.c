// 2. WAP to enter details of 5 employees name id designation using pointer type structure.
#include <stdio.h>

struct employee{
    int ID;
    char name[20];
    char designation[10];
};

int main() {
    struct employee emp[2];
    struct employee *ptr;

    ptr = emp;
    //Taking employee details;
    for (int i= 0; i<5;i++){
        printf("Enter the details of Employee %d", i+1);
        printf("Enter ID: ");
        scanf("%d", &((ptr+i)->ID));
        printf("Enter Name: ");
        scanf("%s", (ptr+i)->name);
        printf("Enter Designation: ");
        scanf("%s", (ptr+i)->designation);

    }

    
    printf("\n----- Employee Details -----\n");

    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", (ptr + i)->ID);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Designation: %s\n", (ptr + i)->designation);
    }

    return 0;
}
