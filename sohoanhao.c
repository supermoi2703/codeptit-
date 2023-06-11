#include<stdio.h>
#include<math.h>
int main(){
	int n,t=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0){
			t+=i;
		}
	}
	if(t==n){
		printf("1");
	}else printf("0");
}