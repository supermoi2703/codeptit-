#include<stdio.h>
#include<math.h>
long long sont(long long n){
	if(n>1){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
			}
		}
	return 1;
}
int main(){
	int m;
	scanf("%d",&m);
	long long t=1;
	while(m--){
		for(long long i=t+1;i<10e20;i++){
			if(sont(i)){
				printf("%lld\n",i);
				t=i;
				break;
			}
		}
	}
}