#include<stdio.h>
#include<math.h>
int main(){
	int t;
	int x=1;
	scanf("%d",&t);
	while(t--){
		int N,M,p;
		scanf("%d%d%d",&N,&M,&p);
		int a[N],b[M];
		for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(int y=0;y<M;y++){
		scanf("%d",&b[y]);
	}
	printf("Test %d:\n",x);
		++x;
	for(int i=0;i<p;i++){
		printf("%d ",a[i]);
	}
	for(int y=0;y<M;y++){
		printf("%d ",b[y]);
	}
	for(int i=p;i<N;i++){
	 printf("%d ",a[i]);
		
}
printf("\n");
	}
}