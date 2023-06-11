#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=m){
		int x=65;
		int t=0;
		for(int j=1;j<=n;j++){					
		for(int i=x+t;i<x+m;i++){
			printf("%c",i);
		}
		int x=64;
		for(int i=x+t;i>=65;i--){
			printf("%c",i);
		}
		t++;
		printf("\n");
	}
	}else{
	int x=65;
		int t=0;
		
		for(int j=1;j<=m;j++){					
		for(int i=x+t;i<x+m;i++){
			printf("%c",i);
		}
		int x=64;
		for(int i=x+t;i>=65;i--){
			printf("%c",i);
		}
		t++;
		printf("\n");
	}
	for(int i=m;i<n;i++){
		int i=65+m-1;
		for(int j=i;j>=65;j--){
			printf("%c",j);
		}
		printf("\n");
	}	
	}
}