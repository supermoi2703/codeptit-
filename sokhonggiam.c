#include<stdio.h>
#include<math.h>
int skg(long long n){
	int s;
		s=n%10;
		n/=10;
	while(n!=0){
		int tg,t;
		t=n%10;
		n/=10;
		if(s<t){
			return 0;
		}else{
			tg=t;
			t=s;
			s=tg;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(skg(n)){
			printf("YES\n");
		}else printf("NO\n");
	}
}