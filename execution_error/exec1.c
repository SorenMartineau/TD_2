#include <stdio.h>

int main() {
    int a = 2;
    int b = 1; // pas possible de diviser par zero
    int c = a / b;  // crash / comportement indéfini
    printf("%d\n", c);
    return 0;
}
