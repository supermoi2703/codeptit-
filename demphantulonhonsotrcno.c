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
	int dem=1;
	for(int i=1;i<n;i++){
		int check=1;
		for(int y=0;y<i;y++){
			if(a[i]<a[y]){
				check=0;
				break;
			}
		}
		if(check){
			++dem;
		}
	}
	printf("%d\n",dem);
}
}