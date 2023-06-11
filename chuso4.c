#include<stdio.h>
#include<math.h>
int tn(int n){
	int a[10];
	int i=0;
	while(n>0){
		if(n%10==4){
			return 0;
		}
		a[i]=n%10;
		n/=10;
		++i;
	}
	for(int j=0;j<(i)/2;j++){
		if(a[j]!=a[i-1-j]){
			return 0;
		}
	}
	return 1;
}
int kt(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}
	if(tong%10!=0){
		return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int x=pow(10,n-1);
		int y=pow(10,n);
		for(int i=x;i<y;i++){
			if(kt(i)&&tn(i)){
				printf("%d ",i);
			}
		}
		printf("\n");
			}
}