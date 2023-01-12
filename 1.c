//C program to perform all arithmetic operations.
#include <stdio.h>
int main(){
    float a,b,c;
    printf("if you want to add click 1\nif you want to subtraction click 3\nif you want to multiply click 3\nif you want to divide click 4\n ");
    scanf("%f",&a);
    printf("Enter the Value of First Number");
    scanf("%f",&b);
    printf("Enter the Value of Second Number");
    scanf("%f",&c);
    if(a==1){
        printf("The addition of two number is %f",b+c);
    }
    else if(a==2){
        printf("The subtraction of two number is %f",b-c);
    }
    else if(a==3){
        printf("The multiplication of number is %f",b*c);
    }
    else if(a==4){
        printf("The division of two number is %f",b/c);
    }
    return 0;
}