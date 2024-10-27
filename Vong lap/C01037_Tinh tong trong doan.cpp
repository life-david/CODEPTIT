#include <stdio.h>

int main() {
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}


