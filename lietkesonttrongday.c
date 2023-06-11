#include<stdio.h>
#include<math.h>
int ktnt(int a){
	if(a==1){
		return 0;
	}
	if(a==2){
		return 1;
	}
	if(a>2){
		for(int k=2;k<=sqrt(a);k++){
			if(a%k==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(ktnt(a[i])){
			++dem;
		}
	}
	printf("%d ",dem);
	for(int i=0;i<n;i++){
		if(ktnt(a[i])){
			printf("%d ",a[i]);
		}
	}
}