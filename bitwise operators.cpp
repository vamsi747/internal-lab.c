#include <stdio.h>

int main() {
    int x = 6, y = 3;

    printf("x = %d, y = %d\n", x, y);
    printf("Bitwise AND: x & y = %d\n", x & y);
    printf("Bitwise OR: x | y = %d\n", x | y);
    printf("Bitwise XOR: x ^ y = %d\n", x ^ y);
    printf("Bitwise NOT: ~x = %d\n", ~x);
    printf("Left Shift: x << 1 = %d\n", x << 1);
    printf("Right Shift: x >> 1 = %d\n", x >> 1);

    return 0;
}