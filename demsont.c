#include<stdio.h>
#include<math.h>
int ktnt(int n){
	if(n<=1){
		return 0;
	}
	if(n>1){
		for(int j=2;j<=sqrt(n);j++){
			if(n%j==0){
				return 0;
			}
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
		for(int i=a;i<=b;i++){
			int x=i;
			int tong;
			int kt=1;
			while(x>0){
				tong=x%10;
				if(ktnt(tong)==0){
					kt=0;
					break;
				}
				x/=10;
			}
			if(ktnt(i)&&kt==1){
				++dem;
			}
		}
		printf("%d\n",dem);
	}
}