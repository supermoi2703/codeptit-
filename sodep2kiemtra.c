#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2){
		return 0;
	}
	if(n>1){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int main(){
	int a;
	scanf("%d",&a);
	int dem=0;
	int x=pow(10,a-1);
	int y=pow(10,a);
	for(int j=x+1;j<y;j++){
		int tong=0;
		int t=j;
		while(t>0){
			tong+=t%10;
			t/=10;
		}
		if(check(j)&&check(tong)){
			printf("%d ",j);
			++dem;
		}
	}
	if(dem==0){
		printf("0");
	}
}