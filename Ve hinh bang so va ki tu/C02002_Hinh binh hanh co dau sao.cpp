#include <stdio.h> 
int main() {
 int n; 
 scanf("%d", &n);
  int m=n-1;
   for (int i = 1; i <= n; i++,m--) { 
   for (int j = 1; j <= m; j++) {
    printf("~"); }
	 for (int j = 1; j <= n; j++) 
	 { printf("*"); } 
	 printf("\n"); }
	  return 0; }
