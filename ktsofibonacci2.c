#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long a[1000];
		a[0]=0,a[1]=1,a[2]=1,a[3]=2;
		int i=4;
		for(i;i<1000;i++){
			a[i]=a[i-1]+a[i-2];
			if(a[i]>=n){
				break;
			}
		}
		//printf("%d",a[i]);
		int kt=0;
		for(int j=0;j<=i;j++){
			if(n==a[j]){
				kt=1;
			}
		}
		if(kt==1){
			printf("YES\n");
		}else printf("NO\n");
	}
	
}