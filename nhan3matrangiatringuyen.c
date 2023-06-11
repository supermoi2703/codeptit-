#include<stdio.h>
#include<math.h>
int main(){
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int a[m][n];
	int b[n][p];
	int c[p][q];
	int d[m][p];
	int e[m][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			d[i][j]=0;	
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			e[i][j]=0;	
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);	
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			scanf("%d",&c[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			for(int k=0;k<n;k++){
				d[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			int x=0;
			for(int k=0;k<p;k++){
				x+=d[i][k]*c[k][j];
			}
			printf("%d ",x);
		}
		printf("\n"); 
	}

}