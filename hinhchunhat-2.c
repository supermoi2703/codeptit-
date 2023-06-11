#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	if(m<=n){
		for(int i=0;i<n;i++){
			printf("%d",a[i]);
		}
		printf("\n");
		int x=m-1;
		int t=1;
		while(x>0){
		for(int i=t;i<n;i++){
			printf("%d",a[i]);
		}
		for(int i=n-2;i>=n-t-1;i--){
			printf("%d",a[i]);
		}
		++t;
		printf("\n");
		--x;
	}
	}else{
	for(int i=0;i<n;i++){
			printf("%d",a[i]);
		}
		printf("\n");
		int x=n-1;
		int t=1;
		while(x>0){
		for(int i=t;i<n;i++){
			printf("%d",a[i]);
		}
		for(int i=n-2;i>=n-t-1;i--){
			printf("%d",a[i]);
		}
		++t;
		printf("\n");
		--x;
	}
	int z=n;
	while(n<m){
	 for(int i=n+1;i>n+1-z;i--){
	 	printf("%d",i);
	 }
	 ++n;
	 printf("\n");	
	}
	}
}