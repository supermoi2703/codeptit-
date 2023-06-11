#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int c=0;
	for(int i=0;i<n;i++){
		int x=1;
		int dem=0;
		for(int k=0;k<i;k++){
			if(a[i]==a[k]){
			x=0;
			break;
			}
		}
		if(x==1){
			for(int j=0;j<n;j++){
				if(a[i]==a[j]){
					++dem;
				}
			}
		if(dem>1){
			++c;
		}
	}
}
if(c>0){
printf("%d\n",c);
}
for(int i=0;i<n;i++){
		int x=1;
		int dem=0;
		for(int k=0;k<i;k++){
			if(a[i]==a[k]){
			x=0;
			break;
			}
		}
		if(x==1){
			for(int j=0;j<n;j++){
				if(a[i]==a[j]){
					++dem;
				}
			}
		if(dem>1){
			printf("%d ",a[i]);
		}
	}
}
}