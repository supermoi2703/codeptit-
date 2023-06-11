#include<stdio.h>
#include<math.h>
int  lechan(int n){
	int z=0,x=0,t,i=0;
	while(i<9){
		t=n%10;
		if(t%2==1){
			z+=1;
		}else x+=1;
		n/=10;
		if(n==0){
			break;
		}
		i++;
	}
	printf("%d %d\n",z,x);
}
int main(){
	int c,m;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&c);
		lechan(c);
	}

}