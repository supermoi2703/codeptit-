#include<stdio.h>
#include<math.h>
int check(int n){
	int a[10];
	int i=0;
	while(n>0){
		a[i]=n%10;
		n/=10;
		++i;
	}
	for(int j=0;j<i-1;j++){
		if(a[j]>=a[j+1]){
			return 0;
		}
	}
	return 1;
	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int dem=0;
		int k;
		for(k=a;k<=b;k++){
			if(check(k)){
				++dem;
			}
		}
		printf("%d\n",dem);
	}
}