#include<stdio.h>
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(0<a,b<1000000){
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f\n",a+b,a-b,a*b,a/b,a%b,(float)a/b);
}
}