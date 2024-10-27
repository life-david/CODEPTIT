#include <stdio.h>
int main(){
 long long a, b;
 scanf ("%lld%lld", &a, &b);
  long long c = a * b;
   if ((a<1) && (b<1))
    return 0;
    while (a!=b){ 
	if (a>b) a-=b;
	 else b-=a; }
	  printf ("%lld\n", a);
	   printf ("%lld", c/a);
	   return 0;
	    }
