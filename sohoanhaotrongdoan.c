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
	int m;
	scanf("%d%d",&m,&n);
	if(m>n){
		int tg=m;
		m=n;
		n=tg;
	}
	int t;
	if(n<9000){
		t=n;
	}else t=9000;
	for(int i=m;i<t;i++){
		int x=ptnt(i);
		if(x==i){
			printf("%d ",x);
		}
		}
	}