#include<stdio.h>
#include<math.h>
int tong(int n){
	int tmp=0;
	while(n>0){
		tmp+=n%10;
		n/=10;
	}
	return tmp;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int x=tong(a[i]);
		for(int j=i+1;j<n;j++){
			int y=tong(a[j]);
			if(x>y){
				int z=a[i];
				a[i]=a[j];
				a[j]=z;
				x=y;
			}
		}	
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}