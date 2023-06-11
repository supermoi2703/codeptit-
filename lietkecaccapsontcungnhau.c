#include<stdio.h>
int ucln(int a,int b){
		while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	while(a<b){
		int c=a+1;
		while(c<=b){
		if(ucln(a,c)==1){
			printf("(%d,%d)\n",a,c);
		}
		c++;
	}
		++a;
	}
}