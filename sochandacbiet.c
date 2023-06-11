#include<stdio.h>
#include<math.h>
int sochan(long long n){
	int s;
	while(n!=0){
		s=n%10;
		if(s%2!=0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int a;
	long long n;
	scanf("%d",&a);
	while(a--){
		scanf("%lld",&n);
		if(sochan(n)){
		printf("YES\n");
	}else printf("NO\n");
	}
	
}