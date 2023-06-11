#include<stdio.h>
#include<math.h>
typedef long long ll;
ll uoc(ll a,ll b){
	while(b!=0){
		ll x=a%b;
		a=b;
		b=x;
	}
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		ll res=n;
		for(int i=n+1;i<=m;i++){
			ll x=uoc(i,res);
			res=(res*i)/x;			
		}
		printf("%lld\n",res);
	}
}