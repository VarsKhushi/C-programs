//C program to find HCF(GCD) AND LCM of two numbers.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    for(int i=a;i>0;i--)
    {
        if(a%i==0 && b%i==0)
        {printf("HCF of %d and %d is %d\n",a,b,i);
        break;}
    }
    for(int i=a;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM of %d and %d is %d",a,b,i);
            break;
        }
    }
    return 0;
}
