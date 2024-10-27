#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a;
        scanf("%d", &a);
        if (a > 0) {
            printf("%.15f\n", 1.0 / a);
        }
    }
    return 0;
}
