#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int max2(int x, int y) {
    if ( x > y ) {
        return x;
    }
    return y;
}

int main() {
    int a, b;
    int max;

    scanf("%d %d", &a, &b);

    max = max2(a, b);

    printf("%d\n", max);

    return 0;
}