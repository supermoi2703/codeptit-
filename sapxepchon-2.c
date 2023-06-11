#include<stdio.h>
#include<math.h>
//s?p x?p ch?n 2
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		int min=a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]<min){
				min=a[j];
			}
		}
		for(int j=i;j<n;j++){
			if(i!=j&&a[j]==min){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}