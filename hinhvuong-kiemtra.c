#include<stdio.h>
#include<math.h>
int check(int n){
	int dem=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i%3==0) ++dem;
		if(n/i!=i&&n/i%3==0){
			++dem;
		}	
		}
		
	}
	return dem;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		int x=check(m);
		printf("%d\n",x);
	}
}