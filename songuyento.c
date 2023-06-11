#include<stdio.h>
#include<math.h>
#include<string.h>
int nt(int a){
	if(a<2)
	return 0;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
     int n;
     scanf("%d",&n);
     while(n--){
     	int x;
     	scanf("%d",&x);
     	if(nt(x)){
     		printf("YES\n");
		 }
     	else printf("NO\n");
	 }
	 return 0;
}