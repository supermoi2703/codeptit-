#include<stdio.h>
#include<math.h>
//hinhchunhat-3
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m<=n){
		for(int i=1;i<=n;i++){
			printf("%d",i);
			
		}
		printf("\n");
		for(int i=2;i<=m;i++){
			int x=i+1;
			while(x--){
				if(x==1){
					break;
				}
				printf("%d",x);
			}
			for(int j=1;j<=n-i+1;j++){
				printf("%d",j);
			}
			printf("\n");
		}
	}else{
		for(int i=1;i<=n;i++){
			printf("%d",i);
			
		}
		printf("\n");
		for(int i=2;i<=n;i++){
			int x=i+1;
			while(x--){
				if(x==1){
					break;
				}
				printf("%d",x);
			}
			for(int j=1;j<=n-i+1;j++){
				printf("%d",j);
			}
			printf("\n");
		}
		for(int i=n+1;i<=m;i++){
			int x=i+1;
			while(x--){
				if(x==i-n){
					break;
				}
				printf("%d",x);
			}
			printf("\n");
		}
	}
}