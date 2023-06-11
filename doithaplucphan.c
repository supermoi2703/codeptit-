#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long n;
	scanf("%lld",&n);
	int i=0;
	int a[18];
	while(n!=0){
		a[i]=n%16;
		n/=16;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		if(a[j]==10) printf("A");
		if(a[j]==11) printf("B");
		if(a[j]==12) printf("C");
		if(a[j]==13) printf("D");
		if(a[j]==14) printf("E");
		if(a[j]==15) printf("F");
		if(a[j]<10&&a[j]>=0) printf("%d",a[j]);
	}
	printf("H\n");
}
}