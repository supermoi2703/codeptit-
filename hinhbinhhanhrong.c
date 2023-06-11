#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int t=n-1;
	int y=n;
	while(n>0){
		while(t>0){
			for(int i=0;i<t;i++){
				printf("~");
			}
		
		    if(t==y-1){
		    	for(int j=0;j<y;j++){
		    		printf("*");
				}
		}else{
			for(int j=0;j<y;j++){
				if(j==0||j==y-1){
					printf("*");
				}else printf(".");
			}
		}
			printf("\n");
		t--;
		}
		
	n--;
	}
	for(int j=0;j<y;j++){
		printf("*");
	}
}