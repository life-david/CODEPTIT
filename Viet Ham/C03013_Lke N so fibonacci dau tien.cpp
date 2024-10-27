#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
    int f0 = 0, f1 = 1, i = 0,fn;
    while(i < n){
    	printf("%d ", f0);
    	fn = f0 + f1;
    	f0 = f1; 
    	f1 = fn;
    	i++;
	}
	return 0;
}

