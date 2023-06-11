#include<stdio.h>
//sapxepchen
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Buoc 0: %d\n",a[0]);
	int t=0;
	int x=2;
	for(int i=1;i<n;i++){
		for(int j=0;j<x;j++){
			for(int k=j+1;k<x;k++){
				if(a[k]<a[j]){
					int tmp=a[k];
					a[k]=a[j];
					a[j]=tmp;
				}
			}	
		}
		printf("Buoc %d: ",++t);
		for(int j=0;j<x;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
		x++;
	}
}