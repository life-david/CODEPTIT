#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for( int h = 1; h <= i; h++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

