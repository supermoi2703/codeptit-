#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<n;i++){
		int max=-10e9;
		int x;
		for(int j=0;j<n;j++){
			if(a[j]>max){
				max=a[j];
				x=j;
			}
		}
		if(a[i]>a[x]){
			printf("%d ",a[i]);
			a[i]=-10e9;
		}else{
			printf("%d ",a[x]);
			a[x]=-10e9;
		}
	}
}