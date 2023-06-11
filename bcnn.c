#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	a=c;
	b=d;
	while(a-b!=0){
		if(a>b){
			a-=b;
		}else b-=a;
	}
	printf("%d",(c*d)/a);
}