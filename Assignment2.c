#include<stdio.h>
int main(){
    int n1, n2;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    if (n1>n2) {
        printf("%d is the largest number", n1);
    }
    else {
        printf("%d is the largest number", n2);
    }
    return 0;
}