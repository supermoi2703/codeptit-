#include<stdio.h>
#include<math.h>
int ptnt(int n){
	int s=0;
		for(int j=1;j<n;j++){
			if(n%j==0){
				s+=j;
			}
		}
	return s;
}
int main(){
	int n;
	scanf("%d",&n);
	int t;
	if(n<9000){
		t=n;
	}else t=9000;
	for(int i=2;i<t;i++){
		int x=ptnt(i);
		if(x==i){
			printf("%d ",x);
		}
		}
	}
