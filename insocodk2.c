#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=100||n<1){
		printf("Nhap sai");
	}else printf("%d",n);
}