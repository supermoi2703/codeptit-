#include<stdio.h>
#include<string.h>
int check1(char n){
	int x=n-'0';
	if(x==2||x==3||x==5||x==7) return 0;
	return 1;
}
int check2(char a[]){
	int l=0;
	int r=strlen(a)-1;
	while(l<r){
		if(a[l]!=a[r]||check1(a[l])) return 0;
		l++;
		r--;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[501];
		scanf("%s", a);
		if(check2(a)) printf("YES\n");
		else printf("NO\n");
	}
}