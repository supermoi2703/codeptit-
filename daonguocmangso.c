#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int t=n;
	for(int i=0;i<n/2;i++){
		int tg;
		tg=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=tg;
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}