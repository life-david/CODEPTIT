#include <stdio.h>
int pascal(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return pascal(n-1, k-1) + pascal(n-1, k);
    }
}
int main() {
    int n;
    printf(" ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }
    return 0;
}


