#include<stdio.h>
#include<math.h>
int fb(int n){
	int a[18];
	a[0]=0; a[1]=1; a[2]=1; a[3]=2;
	for(int i=4;i<18;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<18;i++){
		if(n==a[i]){
			return 1;
		}
	}
	return 0;
}
int ktnt(int n){
	if(n<2){
		return 0;
	}
	if(n>1){
		for(int j=2;j<=sqrt(n);j++){
			if(n%j==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m>n){
		int tg;
		tg=m;
		m=n;
		n=tg;
	}
	for(int k=m;k<=n;k++){
		int dem=0;
		int x=k;
		while(x>0){
			dem+=x%10;
			x/=10;
		}
		if(fb(dem)&&ktnt(k)){
			printf("%d ",k);
		}
	}
}