#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int t=n-1;
	int y=n;
	while(n--){
		while(t>0){
			for(int i=0;i<t;i++){
				printf("~");
			}
			for(int j=0;j<y;j++){
				printf("*");
			}
			printf("\n");
			t--;
		}
	}
	for(int j=0;j<y;j++){
		printf("*");
	}
}