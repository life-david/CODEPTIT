#include<stdio.h> 
#include <stdlib.h>
 main(){ int r,c,max;
  scanf("%d%d",&r,&c); 
  if(r>c){ max = r; } 
  else{ max=c; }
   for(int i = 1; i<=r;i++){ 
   for(int j = 1; j<=c;j++){ 
   printf("%d", abs(max-(i+j-1))+1);
    } 
	printf("\n");
	 }
	  }

