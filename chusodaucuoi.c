#include<stdio.h>
#include<math.h>
int main(){
	int t,n;
	scanf("%d",&n);
	t=n%10;
    while(n>9){
    	n/=10;
	}
	printf("%d %d",n,t);
}