#include<stdio.h>
#include<math.h>
int main(){
	int t=0,n;
	scanf("%d",&n);
	for(int i=1;i<=9;i++){
		n/=10;
		t=t+1;
	    if(n==0){
	    	break;
		}
	}
	printf("%d",t);
}