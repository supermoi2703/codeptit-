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
		int check=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int kt=1;
				for(int k=0;k<i;k++){					
					if(a[j]==a[k]){
						kt=0;
						break;
					}
				}
				if(kt==1){
					if(a[j]==a[i]){
						check++;
					}
				}
				if(a[j]!=a[j+1]){
				break;
			}
			}			
		}
		printf("%d\n",check);
	}
}