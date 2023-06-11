#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
    int a[n],b[n],c[n],d[n];
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
	   if(c[i]-a[i]==d[i]-b[i]){
			printf("YES\n");
		}else printf("NO\n");               
	}
}