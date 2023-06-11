#include<stdio.h>
#include<math.h>
long long kttn(long long n){
	int a[20];
	int i=0;
	while(n>0){
		a[i]=n%10;
		n/=10;
	}
	for(int j=0;j<(i+1)/2;i++){
		if(a[j]!=a[i-j]){
			return 0;
		}
	}
	return 1;
}
long long sole(long long n){
	while(n>0){
		if(n%2==0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
long long ktle(long long n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}
	if(tong%2==0){
		return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(kttn(n)&&ktle(n)&&sole(n)){
			printf("YES\n");
		}else printf("NO\n");
	}
}