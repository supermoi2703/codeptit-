#include<stdio.h>
#include<math.h>
//hinhvuong
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i>0;i--){
	int x=0; 
	int m=i;
	int a[100];
	int c=0;
		for(int j=0;j<n;j++){
			printf("%d",n-x);
			a[c]=n-x;
			++c;
			if(m<n){
				++x;
				++m;
		}
		}
		for(int j=c-2;j>=0;j--){
			printf("%d",a[j]);
		}
		printf("\n");
	}
	for(int i=2;i<=n;i++){
		int x=0; 
	int m=i;
	int a[100];
	int c=0;
		for(int j=0;j<n;j++){
			printf("%d",n-x);
			a[c]=n-x;
			++c;
			if(m<n){
				++x;
				++m;
		}
		}
		for(int j=c-2;j>=0;j--){
			printf("%d",a[j]);
		}
		printf("\n");
	}
}