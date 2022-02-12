#include<stdio.h>
int main(){
    int r;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    printf("1.Diameter of circle: %d \n2.Circumference of circle: %d \n3.Area of circle: %d",2*r,2*3.14*r,3.14*r*r);
    return 0;
}