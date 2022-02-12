#include<stdio.h>
int main(){
    int n1,n2,op;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    printf("Arithmetic Operators: \n1.Additon \n2.Subtraction \n3.Multiplication \n4.Division \n");
    printf("Choose an operator(1,2,3 or 4):");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        printf("The sum of %d and %d is %d",n1,n2,n1+n2);
        break;
    case 2:
        printf("The difference of %d and %d is %d",n1,n2,n1-n2);
        break;
    case 3:
        printf("The product of %d and %d is %d",n1,n2,n1*n2);
        break;
    case 4:
        printf("The quotient of %d divided by %d is %d",n1,n2,n1/n2);
        break;
    }
    return 0;
}