#include<stdio.h>
#include<math.h>
 int checkSTN(long long n){
  long long dao=0;
   long long m=n;
    while(m>0){
	 dao=dao*10+m%10;
	  m/=10;
	          } 
	if(dao==n)return 1;
	else return 0;
	  						}
 int main(){ 
 int t;
  scanf("%d",&t);
   while(t--){
            long long n,sodau,socuoi;
	 scanf("%lld",&n);
	  socuoi=n%10;
	   sodau=n;
	    int dem=0;
		 while(sodau>9){ 
		 sodau=sodau/10;
		 dem++; }
		  long long m=n/10-sodau*pow(10,dem-1);
		   if(sodau==2*socuoi||socuoi==2*sodau&&checkSTN(m))
		   printf ("YES\n");
		    else printf("NO\n");
			 }
			  }

