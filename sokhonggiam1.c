#include<stdio.h>
#include<math.h>
int sokg(int n){
	while(n>0){
		int t=n%10;
		n/=10;
		int x=n%10;
		if(x>t){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int x=pow(10,n);
		int y=pow(10,n-1);
		for(int i=y;i<x;i++){
			if(sokg(i)){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}