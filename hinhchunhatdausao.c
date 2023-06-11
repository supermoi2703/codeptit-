#include<stdio.h>
#include<math.h>
int main(){
	int x,y,z,t,n,m;
	scanf("%d%d",&n,&m);
	y=n;
	z=n-2;
	x=z;
	t=m-2;
	while(n--){
		printf("*");
		if(n==1){
			printf("*\n");
			break;
		}
    }
	while(t--){ 
		printf("*");
		z=x;
		while(z--){
			printf(" ");
		}
		printf("*\n");
	}
	while(y--){
		printf("*");
	}
}