//C program to find all angles of a triangle if two angles are given.
#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the 1st angle of triangle");
    scanf("%f",&a);
    printf("Enter the 2nd angle of triangle");
    scanf("%f",&b);
    c=180-a-b;
    printf("The 3rd angle of triangle is %f",c);
    return 0;
}