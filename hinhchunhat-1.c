#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	if(n>=m){
		int k=0;
		for(int i=0;i<m;i++){
			for(int j=k;j<n;j++){
				printf("%d",a[j]);
			}
			for(int j=k-1;j>=0;j--){
				printf("%d",a[j]);
			}
			printf("\n");
			++k;
		}
	}else{
		int k=0;
		for(int i=0;i<n;i++){
			for(int j=k;j<n;j++){
				printf("%d",a[j]);
			}
			for(int j=k-1;j>=0;j--){
				printf("%d",a[j]);
			}
			printf("\n");
			++k;
		}
		k+=1;
		for(int i=n;i<m;i++){
			printf("%d",k);
			for(int j=n-2;j>=0;j--){
				printf("%d",a[j]);
			}
			++k;
			printf("\n");
					}
	}
}