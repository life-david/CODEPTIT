#include <stdio.h>
 int main() {
  int t;
   scanf("%d",&t);
   while(t--) {
    int n,sum=0; scanf("%d",&n);
	 while(n!=0)
	  { sum+=(n%10);
	       n=n/10;
	   } 
	if(sum%10==0) {
	 printf("YES\n");
	  } 
	else{
	printf("NO\n"); 
	} 
	 } 
	 return 0;
	  }

