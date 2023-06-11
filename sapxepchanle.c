#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x=0,y=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			++x;
		}else{
			++y;
		}
	}
	int b[x];
	int c[y];
	int j=0,k=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			b[j]=a[i];
			j++;
		}else{
			c[k]=a[i];
			k++;
		}
	}
	for(int j=0;j<x;j++){
		int min=10e9;
		int m;
		for(int z=0;z<x;z++){
			if(b[z]<min){
				min=b[z];
				m=z;
			}
		}
		if(b[j]<min){
			printf("%d ",b[j]);
			b[j]=10e9;
		}else{
			printf("%d ",b[m]);
			b[m]=10e9;
		}
	}
	for(int j=0;j<y;j++){
		int min=10e9;
		int m;
		for(int z=0;z<y;z++){
			if(c[z]<min){
				min=c[z];
				m=z;
			}
		}
		if(c[j]<min){
			printf("%d ",c[j]);
			c[j]=10e9;
		}else{
			printf("%d ",c[m]);
			c[m]=10e9;
		}
	}
}
