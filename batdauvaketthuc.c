#include<stdio.h>
#include<math.h>
int main(){
	int n,x,s;
	scanf("%d\n",&n);
	while(n>0){
		scanf("%d",&x);
		s=x%10;
		while(x>9){
			x/=10;
		}
		if(s==x){
			printf("YES\n");
		}else printf("NO\n");
		n--;	
	}
}