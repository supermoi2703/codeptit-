#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			printf("%d ",i);
		}
		int t=0;
		while(n%i==0){
			++t;
			n/=i;
		}
		if(n<i){
			printf("%d",n);
		}
		if(t>0){
			printf("%d\n",t);
		}
}
}