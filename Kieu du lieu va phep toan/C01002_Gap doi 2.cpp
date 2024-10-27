#include <stdio.h>

int main() {
    int t, n, double_n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        double_n = n * 2;
        printf("%d\n", double_n);
    }

    return 0;
}


