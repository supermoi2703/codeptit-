#include<stdio.h>
#include<math.h>
int main(){
	int t;
	int n;
	long long a[92];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
		if(i==0||i==1){
			a[i]=1;
		}else{
			a[i]=a[i-1]+a[i-2];
		}
	}
	printf("%lld\n",a[n-1]);
	}
	
}
