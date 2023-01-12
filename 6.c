//C program to calculate total, average and percentage and grades of five subjects//
#include <stdio.h>
void main(){
    float a,b,c,d,e,total,avg;
    printf("Enter the Number of first subject");
    scanf("%f",&a);
    printf("Enter the Number of second subject");
    scanf("%f",&b);
    printf("Enter the Number of third subject");
    scanf("%f",&c);
    printf("Enter the Number of four subject");
    scanf("%f",&d);
    printf("Enter the Number of fifth subject");
    scanf("%f",&e);
    total=a+b+c+d+e;
    avg=total/5;
    printf("Total Marks of Student is %f\n",total);
    printf("Average of The Student is %f\n",avg);
    if(avg>90){
        printf("Grade obtained is 'A'");
    }
    else if(avg>80 && avg<90){
        printf("Grade obtained is 'B'");
    }
    else if(avg>70 && avg<80){
        printf("Grade obtained is 'C'");
    }
    else if(avg>60 && avg<70){
        printf("Grade obtained is 'D'");
    }
    else if(avg>50 && avg<60){
        printf("Grade obtained is 'E'");
    }
    else if(avg>40 && avg<50){
        printf("Grade obtained is 'F'");
    }
    else if(avg>30 && avg<40){
        printf("Grade obtained is 'G'");
    }
    else{
        printf("Your are Failed");
    }
}