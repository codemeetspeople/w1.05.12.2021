#include <stdio.h>

int main() {
    unsigned int x = 4294967295;

    printf("%u\n", x);

    int minValue = -2147483648;
    int maxValue = 2147483647;

    printf("int type values from %d to %d\n", minValue, maxValue);

    minValue -= 1;
    maxValue += 1;

    printf("int type values from %d to %d\n", minValue, maxValue);

    return 0;
}