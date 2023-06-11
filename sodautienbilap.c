#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int kt;
	for(int i=0;i<n;i++){
		 kt=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					kt=1;
					printf("%d\n",a[i]);
					break;
				}
			}
			if(kt==1){
				break;
			}
	}
	if(kt==0) printf("NO\n");
}
}