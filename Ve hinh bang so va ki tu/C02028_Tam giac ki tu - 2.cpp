#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int i,j;
for (i=1;i<=n;i++){
for (j=1;j<=n-i+1;j++){
printf("%c",64+2*(j+i-1)-1);
}printf("\n");
 }
return 0;
}

