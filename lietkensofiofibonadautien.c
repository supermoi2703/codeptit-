int fb(int n){
	int a[100];
	a[0]=0; a[1]=1; a[2]=1; a[3]=2;
	for(int i=4;i<100;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	fb(n);
}