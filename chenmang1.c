#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[200];
	int b[100];
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(int y=0;y<n;y++){
		scanf("%d",&b[y]);
	}
	int x;
	scanf("%d",&x);
	for(int i=x+n;i<m+n;i++){
		a[i]=a[i-n];
	}
	for(int y=0;y<n;y++){
		a[x]=b[y];
		++x;
	}
	for(int i=0;i<m+n;i++){
		printf("%d ",a[i]);
	}
}