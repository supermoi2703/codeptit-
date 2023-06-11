#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			while(n%i==0){
				printf("%d",i);
				if(n>i){
					printf("x");
				}
			n/=i;
			}
		}
	}
	if(n>1){
			printf("%d",n);
	}
}
int main(){
int n;
scanf("%d",&n);
nt(n);
}