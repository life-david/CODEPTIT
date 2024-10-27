#include <stdio.h>
int main()
{
    int t; // s? b? test
    scanf("%d", &t);
    while (t--)
    {
        int n; 
        scanf("%d", &n);
        int first = n % 10; 
        while (n >= 10) 
        {
            n /= 10; 
        }
        int last = n; 
        if (first == last) 
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

