#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,y;
		scanf("%d%d%d",&n,&m,&y);
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		int b[n];
		for(int j=0;j<n;j++){
			b[j]=a[j][y-1];
		}
			for(int j=0;j<n;j++){
				for(int i=j+1;i<n;i++){
					if(b[i]<b[j]){
						int tmp=b[i];
						b[i]=b[j];
						b[j]=tmp;
					}
				}
				a[j][y-1]=b[j];
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}	
	}
}