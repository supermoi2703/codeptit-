#include<stdio.h>
#include<string.h>
//dayuuthe
int check(int n){
	if(n%2==0) return 1;
	else return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int dem=0;
		int le=0;
		int chan=0;
		char kitu=' ';
		while(kitu!='\n'){
			int x;
			scanf("%d",&x);
			++dem;
			if(check(x)) ++chan;
			else ++le;
			kitu=getchar();
		}
		if((check(dem)==1&&chan>le)||(check(dem)==0&&chan<le)){
			printf("YES\n");
		}else printf("NO\n");
		
	}
}