#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int x=0;
	int kitu=97+m;
	if(n<=m){
		for(int j=0;j<n;j++){
			int kitu=96+m;
		for(int i=0;i<x;i++){
			printf("%c",kitu);
			kitu--;
		}
		for(int i=0;i<m-x;i++){
			printf("%c",kitu);
		}
		x++;
		printf("\n");
	}
	}else{
		for(int j=0;j<m;j++){
			int kitu=96+n;
		for(int i=0;i<x;i++){
			printf("%c",kitu);
			kitu--;
		}
		for(int i=0;i<m-x;i++){
			printf("%c",kitu);
		}
		x++;
		printf("\n");
	}
	int kitu=96+n;
	for(int j=m;j<n;j++){
		for(int i=0;i<x-1;i++){
			printf("%c",kitu);
			kitu--;
		}
		for(int i=0;i<m-x+1;i++){
			printf("%c",kitu);
		}
		printf("\n");
		kitu+=m-1;
	}
	}
}