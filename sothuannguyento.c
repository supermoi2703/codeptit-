#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2) return 0;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int check2(int n){
	while(n>0){
		int x=n%10;
		if(x==0||x==1||x==4||x==6||x==8||x==9) return 0;
		n/=10;
	}
	return 1;
}
int check3(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}
	if(check(tong)) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int cnt=0;
		for(int j=n;j<=m;j++){
			if(check2(j)==0){
			}else{
				if(check(j)&&check3(j)) ++cnt;
			}
		}
		printf("%d\n",cnt);
	}
}