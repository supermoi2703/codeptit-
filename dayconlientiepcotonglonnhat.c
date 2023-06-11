#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long a[n];
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		long long max=-pow(10,9);
		for(int i=0;i<n-1;i++){
			long long kt=-pow(10,9);
			while(a[i]<0){
				if(a[i]<0){
					++i;
				}
			}
			long long tong=a[i];
			for(int j=i+1;j<n;j++){
				tong+=a[j];
				if(tong>kt){
					kt=tong;
				}
				}
				if(kt>max){
					max=kt;
				}
			}
			printf("%lld\n",max);
		}
}