#include<stdio.h>
int main(){
	int a[100],i,n,k;
	printf("enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the element to search:");
		scanf("%d",&k);
	for(i=0;i<n;i++){
		if(a[i]==k){
		    printf("position of %d is %d",k,i+1);	
		}	
	}
	return 0;
}
