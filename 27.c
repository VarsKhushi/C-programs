//PERFECT NO. OR NOT
#include <stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter a no. for checking Perfect number or not: ");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum=sum+i;
		}
		
	}
	if(n==sum)
		printf("It is a Perfect number.");
	else
		printf("It is not a perfect number");
}
