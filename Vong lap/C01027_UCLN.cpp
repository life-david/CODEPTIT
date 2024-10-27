#include <stdio.h>

int UCLN(int a, int b) {
    if (a == 0) {
        return b;
    }
    return UCLN(b % a, a);
}

int main() {
    int num_tests;
    scanf("%d", &num_tests);

    for (int i = 0; i < num_tests; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int result = UCLN(a, b);
        printf("%d\n", result);
    }

    return 0;
}


