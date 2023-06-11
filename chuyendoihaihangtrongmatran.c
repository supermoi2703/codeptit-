#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[51][51];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int c;
	int b;
	scanf("%d%d",&b,&c);
	for(int i=1;i<=n;i++){
		int tmp=a[b][i];
		a[b][i]=a[c][i];
		a[c][i]=tmp;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}