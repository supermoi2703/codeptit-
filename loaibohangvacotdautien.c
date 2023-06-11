#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int x=0;
	while(t--){
		printf("Test %d:\n",++x);
		int m,n;
		scanf("%d%d",&m,&n);
		int a[11][11];
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=2;i<=m;i++){
			for(int j=2;j<=n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}