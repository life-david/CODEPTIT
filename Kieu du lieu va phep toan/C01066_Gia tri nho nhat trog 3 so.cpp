#include<stdio.h>
 #include<math.h>
  int main(){ int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
    int min = a < b ? a : b < c ? b : c;
	 printf("%d",min);
	  return 0; }

