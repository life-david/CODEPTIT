#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int n; scanf("%d", &n);
	int dem = 0;
	while(n != 0){
		++dem;
		n /= 10;
	}
		printf("%d", dem);
		return 0; 
} 

