#include<stdio.h>
int main(){
	int a[100];
		int t;
		int n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	}

}
