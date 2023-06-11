#include<stdio.h>
#include<math.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<n;i++){
		if(k==arr[i]){
			arr[i]=arr[i+1];
			n--;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}