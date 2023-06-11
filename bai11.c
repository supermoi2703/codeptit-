#include<stdio.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",a,b,c);
	if(a==0){
	if(b==0&&c==0){
	printf("Vo so nghiem");
	}else
		if(b==0){
		printf("NO");
	}
	else{
	printf("%.2f",-b/a);
}
	}
	
}