#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int n; scanf("%d", &n);
	int c =0, l = 0;
	while(n != 0){
		int r = n % 10;
		if(r % 2 == 0){
			++c; 
		} 
		else{
			++l; 
		}
		n /= 10; 
	}
	printf("%d %d", l, c);
	return 0; 
} 

