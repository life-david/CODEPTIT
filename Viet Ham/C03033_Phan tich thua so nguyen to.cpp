
#include <stdio.h>
#include <math.h>

void phanTichThuaSo(long long n){
    if (n < 2) return;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int dem = 0;
            while (n % i == 0) {
                dem++;
                n /= i;
            }
            printf("%d^%d ", i, dem);
            if (n != 1) printf("* ");
        }
    }

    if (n != 1) printf("%d^1", n);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld = ", n);
        phanTichThuaSo(n);
        printf("\n");
    }
    return 0;
}


