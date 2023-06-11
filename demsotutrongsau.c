#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
	char c[200];
	gets(c);
	int demso=1;
	for(int i=0;i<strlen(c)-1;i++){
		if(c[i]==' '&&c[i+1]!=' '){
		++demso;
	}
	}
	printf("%d",demso);
	printf("\n");
}
}
