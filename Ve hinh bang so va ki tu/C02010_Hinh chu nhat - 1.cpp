#include<stdio.h> 
main(){ 
int r,c; 
scanf("%d%d",&r,&c); 
int i,j,k; 
for(i=1;i<=r;i++){ 
for(j=i;j<=c;j++){
 printf("%d",j); 
 } if(i>c){ 
 printf("%d",i); 
 for(j=(c-1);j>0;j--){ printf("%d",j);
  } 
  }
  else{ for(j=(i-1);j>0;j--){ 
  printf("%d",j); 
  } 
  } printf("\n"); 
  } 
  }
