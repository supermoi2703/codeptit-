#include<stdio.h>
#include<math.h>
long long check(long long n ){
	int a[20];
	int i=0;
	while(n>0){
		a[i]=n%10;
		n/=10;
		++i;
	}
	int kt=1;
	for(int j=1;j<=(i-1)/2;j++){
		if(a[j]!=a[i-1-j]){
			kt=0;
		}
	}
	if((a[0]==2*a[i-1]||a[i-1]==2*a[0])&&kt==1){
		printf("YES\n");
}else printf("NO\n");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		check(n);
	}
}