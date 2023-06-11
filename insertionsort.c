#include<stdio.h>
#include<math.h>
// insertion sort
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[i]<a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}else{
				break;
			}
		}
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}