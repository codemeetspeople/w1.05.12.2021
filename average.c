#include <stdio.h>

unsigned int average(unsigned int x, unsigned int y) {
    return (x / 2) + (y / 2) + (x % 2 + y % 2) / 2;
}


int main() {
    printf("%u\n", average(4294967295, 4294967295)); //4294967295
    return 0;
}