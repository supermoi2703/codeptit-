#include<stdio.h>
#include<math.h>
int tong(int n){
	int dim=0;
	while(n>0){
		dim+=n%10;
		n/=10;
	}
	return dim;
}
int nt(int n){
	int dem=0;
	int y=n;
	for(int i=2;i<=sqrt(y);i++){
		if(n%i==0){
			while(n%i==0){
				int x=i;
				while(x>0){
					dem+=x%10;
					x/=10;	
				}
			
				n/=i;
			}
		}
	}
	if(n>1){
		int x=n;
		while(x>0){
					dem+=x%10;
					x/=10;	
				}
	}
	return dem;
}
int main(){
	int n;
	int x=n;
	scanf("%d",&n);
	//printf("%d %d",tong(n),nt(n));
	if(tong(n)==nt(n)){
		printf("YES");
	}else printf("NO");
}