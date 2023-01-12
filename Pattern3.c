/* 
11111
22222
33333
44444
55555  */
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}