#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int check(char n){
	int x=n-'0';
	if(x%2!=0) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[501];;
		scanf("%s",c);
		int l=0;
		int r=strlen(c)-1;
		int kt=1;
		while(l<r){
			if(c[l]!=c[r]||check(c[l])){
				kt=0;
				break;
			}
			l++;
			r--;
		}
		if(kt==1){
			printf("YES\n");
		}else printf("NO\n");
	}
}
                    