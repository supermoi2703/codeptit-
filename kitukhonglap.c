#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[100001];
		scanf("%s",a);
		int cnt[26]={0};
		for(int i=0;i<strlen(a);i++){
			cnt[a[i]-'A']++;
		}
		for(int i=0;i<26;i++){
			if(cnt[i]==1){
				printf("%c",i+'A');
			}
		}
	}
}