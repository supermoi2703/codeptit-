#include<stdio.h>
#include<math.h>
int ktnt(int a){
	if(a==1){
		return 0;
	}
	if(a==2){
		return 1;
	}
	if(a>2){
	for(int h=2;h<=sqrt(a);h++){
		if(a%h==0){
			return 0;
		}
	}
}
return 1;
}
int sapxep(int s[],int n){
	int b[n];
	int k=0;
	for(int i=0;i<n;i++){
		int min=10e9;
		int x;
		for(int j=0;j<n;j++){
			if(s[j]<=min){
				min=s[j];
				x=j;
			}
		}
		if(s[i]<=min){
			b[k]=s[i];
			s[i]=10e9;
		}else{
			b[k]=s[x];
			s[x]=10e9;
		}
		k++;
	}
	for(int i=0;i<n;i++){
		int x=1;
		for(int k=0;k<i;k++){
			if(b[i]==b[k]){
				x=0;
				break;
			}
		}
		if(x==1){
		if(ktnt(b[i])){
			int dem=0;
			for(int j=0;j<n;j++){
				if(b[j]==b[i]){
				++dem;
				}
			}
			printf("%d xuat hien %d lan\n",b[i],dem);
		}
}
	}
}
int main(){
    int t;
    scanf("%d",&t);
    int v=0;
    while(t--){
    
    	int n;
    	scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
    	scanf("%d",&s[i]);
	}
		printf("Test %d:\n",++v);
	int b[n];
	sapxep(s,n);
}
	}
 
 