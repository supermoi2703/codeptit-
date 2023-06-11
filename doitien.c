#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
	int a[]={1,2,5,10,20,50,100,200,500,1000};
	int dem=0;
	while(n!=0){
		int kt=1;
		int x;
		for(int i=0;i<=9;i++){
			if(n<a[i]){
				kt=0;
				x=a[i-1];
				break;
			}
		}
		if(kt==0){
			n-=x;
			++dem;
		}
		if(kt==1){
			n-=1000;
			++dem;
		}
	}
	printf("%d\n",dem);
	}
}