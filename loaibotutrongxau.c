#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	char b[100];
	gets(a);
	scanf("%s",b);
	for(int i=0;i<strlen(a);i++){
		int kt=0;
		if(a[i]==b[0]){
			kt=1;
			for(int j=0;j<strlen(b);j++){
				if(a[i+j]!=b[j]){
					kt=0;
					break;
				}
			}
		}
		if(kt==0){
			printf("%c",a[i]);
		}else{
			i+=strlen(b);
		}
	}
}