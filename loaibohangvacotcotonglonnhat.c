#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int x=0;
	while(t--){
		
		int m,n;
		scanf("%d%d",&m,&n);
		int a[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",++x);
		int min=0;
		for(int i=0;i<m;i++){
			int tong=0;
			for(int j=0;j<n;j++){
				tong+=a[i][j];
			}
			if(tong>min){
				min=tong;
			}
		}
		//printf("%d",min);
		for(int i=0;i<m;i++){
			int tong=0;
			for(int j=0;j<n;j++){
				tong+=a[i][j];
			}
			if(tong==min){
				//printf(" %d",tong);
			for(int j=0;j<n;j++){
					a[i][j]=-1;
				}
			}
		}
		int max=0;
		for(int i=0;i<n;i++){
			int tong=0;
			for(int j=0;j<m;j++){
				tong+=a[j][i];
			}
			if(tong>max){
				max=tong;
			}
		}
		for(int i=0;i<n;i++){
			int tong=0;
			for(int j=0;j<m;j++){
				tong+=a[j][i];
			}
			if(tong==max){
				for(int j=0;j<m;j++){
					a[j][i]=-1;
				}
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]!=-1) printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}