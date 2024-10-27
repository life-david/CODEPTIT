#include <stdio.h>

int main() {
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);

    unsigned long long sum = a + b;
    unsigned long long diff = a > b ? a - b : b - a;
    unsigned long long product = a * b;
    unsigned long long quotient = a / b;
    unsigned long long remainder = a % b;
    double division = (double) a / b;

    printf("%llu\n%llu\n%llu\n%llu\n%llu\n%.2lf\n", sum, diff, product, quotient, remainder, division);

    return 0;
}



