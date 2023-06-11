#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
		while(t--){
	int a[10000];
	int k=0;
	for(int i=2;i<10000;i++){
		int kt=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				kt=0;
			}
		}
		if(kt==1){
			a[k]=i;
			++k;
		}
	}
		int n;
		scanf("%d",&n);
		for(int i=0;i<k;i++){
			for(int j=i;j<k;j++){
				if((a[i]+a[j])==n){
					printf("%d %d ",a[i],a[j]);
					break;
				}
			}
			if(n<=i){
				break;
			}
		}
		printf("\n");
	}
}