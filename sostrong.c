#include<stdio.h>
#include<math.h>
int gt(int n){
	int s=1;
    for(int i=2;i<=n;i++){
    	s*=i;
	}
	return s;
}
int sostrong(int n){
	int tong=0,m=n;
	while(n!=0){
		tong+=gt(n%10);
		n/=10;
	}
	if(m==tong){
		return 1;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
   printf("%d",sostrong(n));

}