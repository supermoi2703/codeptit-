#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
		int x=0;
	while(t--){
	
		printf("Test %d:\n",++x);
		int n;
		scanf("%d",&n);
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i]=1;
		}
		for(int i=0;i<n-1;i++){
			int dem=1;
			for(int j=i+1;j<n;j++){
				if(a[j]>a[j-1]){
					++dem;
				}else{
					break;
				}
			}
			if(dem>1){
				b[i]=dem;
			}
		}
		int max=0;
		for(int i=0;i<n;i++){
			if(b[i]>max){
				max=b[i];
			}
		}
		printf("%d\n",max);
		for(int i=0;i<n;i++){
			if(b[i]==max){
			for(int j=i;j<i+max;j++){
				printf("%d ",a[j]);
			}
			printf("\n");	
			}
		}
	}
}