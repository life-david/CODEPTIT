#include<stdio.h>
 #include<string.h>
  int check(char a[]){
   int i;
    for(i=0;i<strlen(a);i++){ 
	if(a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
	return 0;
	 } return 1;
	  } int main(){
	   int t;
	    scanf("%d",&t);
		 while(t--){ 
		 char a[10000];
		  scanf("%s",a);
		   if(check(a))
		   printf("YES\n");
		    else printf("NO\n");
			 } }
