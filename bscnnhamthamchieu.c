#include<stdio.h>
long uscln(long *a,long b){
	while(*a!=b){
		if(*a>b){
			*a-=b;
		}else{
			b-=*a;
		}
	}
	return *a;
}
int main(){
	long a,b,r;
	scanf("%ld%ld",&a,&b);
	if(a>0&&b>0){
		int r=a;
		
 		r=uscln(&a,b);
	printf("%ld\n%lld",a,(long long) r*b/a);
}
}