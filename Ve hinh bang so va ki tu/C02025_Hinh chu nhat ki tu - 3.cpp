#include <stdio.h>
 int main() { 
 int m,n,start=1; 
 scanf("%d%d",&m,&n); 
 for(int i=1;i<=m;i++){ 
 for(int j=1;j<=n;j++) 
 printf("%c",(i+j-1>n)?'@'-1+n:'@'-2+j+i);
  printf("\n");
   } }

