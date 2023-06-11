#include<stdio.h>
#include<math.h>
int sont(int n){
	if(n>1){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
			}
		}
	return 1;
}
int main(){
	int m;
	scanf("%d",&m);
	for(int i=2;i<m;i++){
		if(sont(i)==1){
			printf("%d\n",i);
		}
	}
}