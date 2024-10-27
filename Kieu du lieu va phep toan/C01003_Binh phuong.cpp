#include<stdio.h>
int main(){
	int t;
	unsigned long long n,square;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		scanf("%llu",&n);
		square=n*n;
		printf("%llu\n",square); 
	}
	return 0; 
}
