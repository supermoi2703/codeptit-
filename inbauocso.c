#include<stdio.h>

int main(){
	int n;
	int k;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(n%i==0){
			++k;
		}
	}
	if(k<3){
		printf("THIEU");
	}
	for(int i=2;i<=n;i++){
		if(i>=sqrt(n)&&n%i==0){
			printf("%d ",i);
		}
	}
}