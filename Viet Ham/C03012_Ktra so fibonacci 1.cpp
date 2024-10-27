
#include <stdio.h>
int fibonacci(int n) {
    int a = 0, b = 1, c = 0;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
    if (c == n) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    printf(" ");
    scanf("%d", &n);
    if (fibonacci(n)) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}


