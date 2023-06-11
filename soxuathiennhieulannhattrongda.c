#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int max=0;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);	
		}
		for(int i=0;i<n;i++){
			int kt=1;
			for(int k=0;k<i;k++){
				if(a[i]==a[k]){
					kt=0;
				}
			}
			int dem=0;
			if(kt==1){
				for(int j=0;j<n;j++){
					if(a[i]==a[j]){
						++dem;
					}
				}
			}
		if(dem>=max){
			max=dem;
		}
		}
			for(int i=0;i<n;i++){
			int kt=1;
			for(int k=0;k<i;k++){
				if(a[i]==a[k]){
					kt=0;
				}
			}
			int dem=0;
			if(kt==1){
				for(int j=0;j<n;j++){
					if(a[i]==a[j]){
						++dem;
					}
				}
			}
			if(dem==max){
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
}