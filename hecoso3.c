#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[19];
		scanf("%s",a);
		int check=1;
		for(int i=0;i<strlen(a);i++){
			int x=a[i];
			if(x<'0'||x>'2'){
			check=0;
			break;
		}
		}
		if(check==1) printf("YES\n");
		else printf("NO\n"); 
	}
}