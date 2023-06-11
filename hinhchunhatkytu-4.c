#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n==m){
		int t=0;
		for(int i=1;i<=n;i++){
			for(int j=64+m-t;j<64+m;j++){
				printf("%c",j);
			}			
			for(int j=65+m-t;j>65;j--){
				printf("%c",64+m);
			}
			t++;
			printf("\n");
		}
	}
	if(n<m){
	int t=0;
		for(int i=1;i<=n;i++){
			for(int j=64+n-t;j<64+m;j++){
				printf("%c",j);
			}			
			for(int j=65+n-t;j>65;j--){
				printf("%c",64+m);
			}
			t++;
			printf("\n");
		}	
	}
	if(n>m){
		for(int i=1;i<m;i++){
			for(int j=0;j<m;j++){
				printf("%c",64+m);
			}
			printf("\n");
		}
		int t=0;
		for(int i=1;i<=m;i++){
			for(int j=64+m-t;j<64+m;j++){
				printf("%c",j);
			}			
			for(int j=65+m-t;j>65;j--){
				printf("%c",64+m);
			}
			t++;
			printf("\n");
		}
	}
}