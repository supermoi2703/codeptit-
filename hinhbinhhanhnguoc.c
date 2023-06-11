#include<stdio.h>
int main(){
	int n,x;
	scanf("%d%d",&x,&n);
	int y=n;
	for(int j=0;j<y;j++){
		printf("*");
	}
	printf("\n");
	int t=1;
	while(t<x){
		for(int i=0;i<t;i++){
			printf("~");
		}
		for(int j=0;j<y;j++){
			printf("*");
		}
		printf("\n");
		t++;
	}
}