#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int j=n-1;
	for(int i=0;i<n;i++){
			int tmp=a[i][i];
			a[i][i]=a[i][j];
			a[i][j]=tmp;
			j--;
			if(j<0){
				break;
			}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}