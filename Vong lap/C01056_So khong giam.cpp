#include <stdio.h>
#include <math.h>
#include <string.h>

int check(long long n){
    int digits[20];
    int len = 0;
    while(n != 0){
        digits[len] = n % 10;
        n /= 10;
        len++;
    }
    for(int i = 0; i < len - 1; i++){
        if(digits[i] < digits[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        if(check(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


