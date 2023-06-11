#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int t=n-2;
	for(int i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
	while(t--){
		for(int i=0;i<n;i++){
			if(i==0||i==n-1){
				printf("*");
			}else printf(".");
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		printf("*");
	}
}