#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=m){
		int t=64;
		int x=0;
		for(int j=1;j<=n;j++){
		for(int i=64+x;i<64+m;i++){
			printf("%c",i);
		}
		for(int i=64;i<64+x;i++ ){
			printf("%c",63+m);
		}
		x++;
		printf("\n");
	}
}else{
	int t=64;
		int x=0;
		for(int j=1;j<=m;j++){
		for(int i=64+x;i<64+m;i++){
			printf("%c",i);
		}
		for(int i=64;i<64+x;i++ ){
			printf("%c",63+m);
		}
		x++;
		printf("\n");
	}
	for(int j=m;j<n;j++){
		for(int i=0;i<m;i++){
			printf("%c",63+m);
		}
		printf("\n");
	}	
}
}