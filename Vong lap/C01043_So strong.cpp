#include <stdio.h>
#include <math.h>
#include <string.h>

int gt(int n){
    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
    } 
    return res; 
} 

int strong(int n){
    int tong = 0;
    int temp = n;
    while(temp != 0){
        tong += gt(temp % 10);
        temp /= 10; 
    }
    if(tong == n){
        return 1; 
    }
    return 0; 
}

int main(){
    int n;
    scanf("%d", &n);
    if(strong(n) == 1){
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}


