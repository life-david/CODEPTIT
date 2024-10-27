#include <stdio.h> 
int main() {
    int t;
    printf("");
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        unsigned int n;
        printf("", i+1);
        scanf("%u", &n);
        if (n < 2) {
            printf("Nhap n > 1");
        } else {
            unsigned int j = 2;
            printf("", n);
            while (n > 1) {
                if (n % j == 0) {
                    printf("%u", j);
                    if (n != j) {
                        printf(" ");
                    }
                    n /= j;
                } else {
                    j++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}

 

