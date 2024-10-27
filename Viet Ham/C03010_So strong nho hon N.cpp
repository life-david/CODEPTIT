#include <stdio.h>

int giaiThua(int n) {
    int tich = 1;
    for(int i = 1; i <= n; i++) {
        tich = tich * i;
    }
    return tich;
}

int main() {
    int tong = 0;
    int giaiThuaChuSo = 1;
    int n, chuSo;
    printf(" ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int k = i;
        while(k != 0) {
            chuSo = k % 10;
            giaiThuaChuSo = giaiThua(chuSo);
            k = k / 10;
            tong = tong + giaiThuaChuSo;
        }
        if(tong == i) {
            printf("%d ", i);
        }
        tong = 0;
    }
    return 0;
}


