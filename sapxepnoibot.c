#include<stdio.h>
#include<math.h>
//s?p x?p n?i b?t
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x=1;
	for(int i=0;i<n;i++){
		int check=0;
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
			int tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
			check=1;				
			}
		}
		if(check==1){
			printf("Buoc %d: ",x++);
			for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
		}
	}
}