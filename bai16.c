#include<stdio.h>
#include<math.h>
int main(){
	int l,m,k,h,a,b,c,d,x,y,z,t;
	scanf("%d%d%d%d\n",&a,&b,&c,&d);
	scanf("%d%d%d%d",&x,&y,&z,&t);
	l=abs(z-a);
	m=abs(c-x);
	k=abs(t-b);
	h=abs(d-y);
	if(l>=m&&l>=k&&l>=h){
     printf("%d",l*l);
    }else{
    	if(m>l&&m>=k&&m>=h){
		printf("%d",m*m);
	}else{
	if(k>l&&k>m&&k>=h){
		printf("%d",k*k);
	}else{
		printf("%d",h*h);
	}
	}
	}
	}