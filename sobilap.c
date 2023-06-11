#include<stdio.h>
#include<math.h>
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
		int x;
		int k=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					x=a[i];
					k++;
					break;
				}
			}
			if(k>0){
				break;
			}
		}
		
		if(k>0){
			printf("%d\n",x);
		}
		if(k==0){
			printf("NO\n");
		}
	}
}