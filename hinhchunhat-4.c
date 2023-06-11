#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m<=n){
		for(int i=n;i>n-m;i--){
			int x=i+1;
			while(x--){
				printf("%d",x);
				if(x==1) break;
			}
			for(int j=x+1;j<=n-i+1;j++){
				printf("%d",j);
			}
			printf("\n");
		}
	}else{
		for(int i=m;i>n;i--){
			int x=i+1;
			while(x--){
				printf("%d",x);
				if(x==i-n+1){
					break;
				}
			}
			printf("\n");
		}
		for(int i=n;i>0;i--){
			int x=i+1;
			while(x--){
				printf("%d",x);
				if(x==1) break;
			}
			for(int j=x+1;j<=n-i+1;j++){
				printf("%d",j);
			}
			printf("\n");
		}
	}
}