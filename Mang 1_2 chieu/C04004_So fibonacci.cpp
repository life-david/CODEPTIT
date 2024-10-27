
#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i=0;i<t;i++)
	{
        int n;
        scanf("%d", &n);
        long long f0 = 0, f1 = 1, fn;
        if(n == 0) fn = f0;
        else 
		    if(n == 1) fn = f1;
            else{
                 for(int i=2; i<=n; i++)
				 {
                   fn = f0 + f1;
                   f0 = f1;
                   f1 = fn;
                 }   
               }
        printf("%lld\n", fn);
    }
    return 0;
}


