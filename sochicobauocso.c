#include<stdio.h>
#include<math.h>
int main(){
	int x;
	scanf("%d",&x);
	while(x--){
		int l,r;
		int t=0;
		int s=0;
		scanf("%d%d",&l,&r);
		while(r!=l){
			for(int i=2;i<=r;i++){
				if(r%i==0){
					++t;
				}
			}
			if(t==2){
				++s;
			}
			r--;
		}
		printf("%d",s);
	}
}
