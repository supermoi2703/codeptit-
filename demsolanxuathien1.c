#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int y;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		   y=1;
	for(int x=0;x<i;x++){
		if(a[i]==a[x]){
			y=0;
		}
	}
	if(y==1){
			printf("%d ",a[i]);
			int dem=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				++dem;
			}
		}
		printf("%d\n",dem);
		}
		
	}
}