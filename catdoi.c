#include<stdio.h>
#include<math.h>
int main(){
	int x;
	long long s;
	scanf("%d",&x);
	while(x--){
		long long n;
		scanf("%lld",&n);
		s=0;
		int i=0;
		while(n>0){
			int t;
			t=n%10;
			n/=10;
			if(t!=1&&t!=0&&t!=8&&t!=9){
				printf("INVALID\n");
				s=-1;
				break;
			}else{
				if(t==1){
					s+=pow(10,i);
				}
			}
			i++;
		}
			if(s>0){
			printf("%lld\n",s);
	} 
	if(s==0) printf("INVALID\n");
	}

}