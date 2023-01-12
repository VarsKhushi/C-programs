//C program to convert days in to years, weeks and days
#include <stdio.h>
void main(){
    int a,b,c,year,week;
    printf("Enter the number of days");
    scanf("%d",&a);
    b=a/365;
    year=a%365;
    a=a-(b*365);
    c=a/7;
    week=a%7;
    if(year==0 && week==0){
        printf("%d year and %d weaks are in the given days",b,c);
    }
    else{
        printf("%d year, %d weaks and %d days are present",b,c,week);
    }
}
