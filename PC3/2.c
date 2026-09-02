/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main() {
    int mks1, mks2, mks3;
    printf("Enter marks1: ");
    scanf("%d", &mks1);
    printf("Enter marks2: ");
    scanf("%d", &mks2);
    printf("Enter marks3: ");
    scanf("%d", &mks3);

    float percentage =  ((mks1+mks2+mks3)/300.0)*100;
    percentage>= 40 && (mks1>=33 && mks2>=33 && mks3>=33) ? printf("The student passed\n") : printf("Student failed\n");
    printf("Percentage: %.2f%%\n",  percentage);
    return 0;

}
