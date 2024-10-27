#include <stdio.h>

int ktra_snt(int t) {
    if (t < 2) {
        return 0;
    }
    for (int i = 2; i <= t / 2; i++) {
        if (t % i == 0) {
            return 0;
        }
    }
    return 1;
}

int ktra_thuan_nghich(int t) {
    int u = 0, v, w = t;
    while (t != 0) {
        v = t % 10;
        u = u * 10 + v;
        t /= 10;
    }
    return w == u;
}

void inso(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (ktra_snt(i) && ktra_thuan_nghich(i)) {
            printf("%d ", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    printf("\n");
}

int main() {
    int t, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        inso(a, b);
    }
    return 0;
}


