#include<stdio.h>
#include<math.h>
int ktnt(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int m,t, a[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<m;i++){
			if(ktnt(a[i])==1){
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
	
}
