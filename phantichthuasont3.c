#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	int x=0;
	while(t--){
		
		int n;
		scanf("%d",&n);
		printf("Test %d: ",++x);
		for(int i=2;i<=sqrt(n);i++){
			int dem=0;
			int kt=0;
			while(n%i==0){
				if(n%i==0){
					n/=i;
					++dem;
					kt=1;
				}
			}
			if(kt==1)
			printf("%d(%d) ",i,dem);
		}
		if(n>1) printf("%d(1)",n);
		printf("\n");
	}
}