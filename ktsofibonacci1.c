#include<stdio.h>
int fb(int n){
	int a[100];
	a[0]=0; a[1]=1; a[2]=1; a[3]=2;
	for(int i=4;i<100;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<100;i++){
		if(n==a[i]) return 1;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(fb(n)){
		printf("1");
	}else printf("0");
}