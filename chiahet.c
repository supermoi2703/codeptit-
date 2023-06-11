#include<stdio.h>
#include<math.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int dem=0;
	for(int i=2;i<=n;i+=2){
		if(i%2==0){
			int j=i;
			while(j%2==0){
				++dem;
				j/=2;
			}
		}
	}
	if(dem>=k){
		printf("Yes");
	}else printf("No");
}