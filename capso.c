#include<stdio.h>
#include<math.h>
long long ucln(long long a,long long b){
	while(a!=b){
		if(a>b){
			a-=b;
		}else b-=a;
	}
	return a;
	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long m,n,p,q;
	scanf("%lld%lld%lld%lld",&m,&n,&p,&q);
	int x=ucln(m,n);
	int y=ucln(p,q);
	if(x==y){
		printf("YES\n");
	}else printf("NO\n");
}
}