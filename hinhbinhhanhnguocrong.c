#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int y=n;
	for(int j=0;j<y;j++){
		printf("*");
	}
	printf("\n");
	int t=1;
	while(t<m){
		for(int i=0;i<t;i++){
			printf("~");
		}
		if(t==m-1){
			for(int i=0;i<y;i++){
				printf("*");
			}
		}else{
		for(int i=0;i<y;i++){
			if(i==0||i==y-1){
				printf("*");
			}else printf(".");
		}
	}
		printf("\n");
		t++;
	}
}