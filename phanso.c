#include<stdio.h>
#include<math.h>
int checkuoc(int a,int b){
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	int dem=1;
	while(t--){
		int e,f,g,h;
		scanf("%d%d%d%d",&e,&f,&g,&h);
		int a=e/checkuoc(e,f);
		int c=g/checkuoc(g,h);
		int d=h/checkuoc(g,h);
		int b=f/checkuoc(e,f);
		printf("Case #%d:\n",dem++);
		int x=checkuoc(b,d);
		printf("%d/%d %d/%d",(a*d)/x,(b*d)/x,(c*b)/x,(b*d)/x);
		printf("\n");
		int z=checkuoc((a*d+c*b)/x,(b*d)/x);
		printf("%d/%d\n",(a*d+c*b)/(x*z),(b*d)/(x*z));
		int t=checkuoc((a*d)/(x),(c*b)/(x));
		printf("%d/%d\n",(a*d)/(x*t),(c*b)/(x*t));
	}
}