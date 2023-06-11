#include<stdio.h>
#include<math.h>
long long kttn(long long n){
	int a[100];
	int i=0;
	while(n>0){
		a[i]=n%10;
		n/=10;
		++i;
	}
	int kt=1;
	for(int j=0;j<=(i-1)/2;j++){
		if(a[j]!=a[i-j-1]){
			return 0;
		}
	}
	return 1;
}
long long tong(long long n){
	int dem=0;
	while(n>0){
		dem+=n%10;
		n/=10;
	}
	if(dem%10!=0){
		return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long x=pow(10,n-1);
		long long y=pow(10,n);
		int tmp=0;
		for(long long k=x;k<y;k++){
			if(kttn(k)==1&&tong(k)==1){
				++tmp;
			}
		}
		printf("%d\n",tmp);
	}
}