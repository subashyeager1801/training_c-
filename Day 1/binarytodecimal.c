#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

