#include <stdio.h>
#include <math.h>
#define endl "\n"
#define ll long long
 
int main()
{
  int t = 1;
  //scanf("%d", &t);
  while(t--)
  {
    ll m, n, d = 0;
    scanf("%lld %lld", &m, &n);
 
    for(ll i = 1; i <= sqrt(n); i++)
    {
      if(i * i >= m && i * i <= n)
        d++;
    }
 
    printf("%lld\n", d);
 
    for(ll i = 1; i <= sqrt(n); i++)
    {
      if(i * i >= m && i * i <= n)
        printf("%lld\n", i*i);
    }
  }
}

