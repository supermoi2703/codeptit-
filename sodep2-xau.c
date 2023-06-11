#include<stdio.h>
#include<string.h>
int check(char a[]){
	int l=0;
	int r=strlen(a)-1;
	while(l<r){
		if(a[l]!=a[r]) return 0;
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
		scanf("%s",a);
		int tong=0;
		for(int i=0;i<strlen(a);i++){
			int x=a[i]-'0';
			tong+=x;
		}
		int m=a[strlen(a)-1]-'0';
		int n=a[0]-'0';
		if(n==8&&m==8&&tong%10==0&&check(a)){
			printf("YES\n");
		}else printf("NO\n");
	}
	
}