#include<stdio.h>
#include<math.h>
int sutc(long long n){
		int s,c=0,l=0;
	if((n%10)%2!=0){
		printf("NO\n");
	}else{
			while(n!=0){
	
		s=n%10;
		if(s%2==0){
			++c;
		}else{
			++l;
		}
		n/=10;
	}
	if(c>l){
			printf("YES\n");
		}else printf("NO\n");
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		sutc(n);
	}
}