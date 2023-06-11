#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
    long T,a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		T=sqrt(a[i]);
		if(T*T==a[i]){
			printf("YES\n");
		}else printf("NO\n");
	}
	}