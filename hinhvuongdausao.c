#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int t=n;
	while(n--){
	for(int i=0;i<t;i++){
		printf("*");
	}
	printf("\n");
}
}