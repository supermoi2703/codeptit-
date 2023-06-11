#include<stdio.h>
#include<math.h>
int tongso(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int x=a;
	int y=b;
	if(tongso(a)>tongso(b)){
		printf("%d %d",y,x);
	}else printf("%d %d",x,y);
}