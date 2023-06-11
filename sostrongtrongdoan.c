#include<stdio.h>
#include<math.h>
int sostrong(int n){
	
	int tong=0;
	int x=n;
	while(n>0){
		int tich=1;
		int t=n%10;
		for(int i=1;i<=t;i++){
			tich*=i;	
		}
		tong+=tich;
		n/=10;
	}
	if(tong!=x){
		return 0;
	}
	return 1;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m>n){
		int tg=m;
		m=n;
		n=tg;
	}
	for(int i=m;i<=n;i++){
		if(sostrong(i)){
			printf("%d ",i);
		}
	}
}