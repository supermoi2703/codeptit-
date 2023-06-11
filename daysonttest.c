#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int k=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==2){
			printf("2 ");
			++k;
		}else{
			if(a[i]>2){
				int kt =1;
				for(int j=2;j<=sqrt(a[i]);j++){
					if(a[i]%j==0){
						kt=0;
					}
				}
				if(kt==1){
					printf("%d ",a[i]);
					++k;
				}
			}
		}
	}
	if(k==0){
		printf("0");
	}
}