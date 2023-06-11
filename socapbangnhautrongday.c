#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			int y=0;
			for(int k=0;k<n;k++){
				if(a[i]==a[k]){
					y=1;
				}
			}
			if(y==0){
				a[i]==0;
			}
		}
		int capso=0;
		for(int i=0;i<n;i++){
			int dem=-1;
			if(a[i]>0){
				for(int k=0;k<n;k++){
					if(a[i]==a[k]){
						++dem;
					}
				}
			}
			capso+=dem;
		}
		printf("%d\n",capso);
	}
}