#include <stdio.h>
#include <math.h>

int main() {
    int num_tests;
    scanf("%d", &num_tests);

    for (int i = 1; i <= num_tests; i++) {
        int num;
        scanf("%d", &num);

        int square_root = sqrt(num);
        if (square_root * square_root == num) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}


