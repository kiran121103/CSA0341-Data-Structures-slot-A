#include<stdio.h>
int main(){
	int i,n,a[100],j,c,x;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	while(c!= 2){
	printf("\n\nenter 0 for ascending or 1 for descending order or 3 for exit\n");
	scanf("%d",&c);
	if(c==0){
		printf("ascending order: ");
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
	}else if(c==1){
	    printf("descending order: ");
		for(i=n-1;i>=0;i--){
			printf("%d ",a[i]);
		}
	}else if (c==2){
		printf("exit");
	}else{
		printf("invalid input");
	}
}
	return 0;
}
