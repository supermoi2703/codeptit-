#include<stdio.h>
#include<math.h>
int kttn(int n){
	int a[5];
	int i=0;
	while(n>0){
		a[i]=n%10;
		n/=10;
		++i;
	}
	for(int j=0;j<(i+1)/2;j++){
		if(a[j]!=a[i-1-j]){
			return 0;
		}
	}
	return 1;
}
int check(int n){
	while(n>0){
		if(n%10==9){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int tong=0;
	for(int i=2;i<n;i++){
		if(kttn(i)&&check(i)){
			printf("%d ",i);
			++tong;
		}
	}
	printf("\n%d",tong);
}