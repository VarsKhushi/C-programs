//COUNT FREQUENCY OF A GIVEN ARRAY
#include<stdio.h>
int main(){
	int n,i,dig,count=0;
	printf("Enter the size of an array: ");		//Taking Size of  Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking  Elements of array
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to count the frquency: ");
	scanf("%d",&dig);
	for(i=0;i<n;i++){
		if(a[i]==dig){
			count++;
	}
	}
	printf("The element occur %d times!!",count);
}
