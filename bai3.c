#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
    long long a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%lld\n",a[i]*a[i]);
	}
	}