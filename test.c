#include <stdio.h>
#include "calc.h"

int main() {
    int a = 12, b = 8;

    printf("Add: %d + %d = %d\n", a, b, _add(a, b));
    printf("Subtract: %d - %d = %d\n", a, b, sub(a, b));
    printf("Multiply: %d * %d = %d\n", a, b, mul(a, b));
    printf("Divide: %d / %d = %d\n", a, b, divide(a, b));
    printf("Factorial: %d! = %d\n", a, fac(a));
    printf("Modulus: %d %% %d = %d\n", a, b, mod(a, b));
    printf("Power: %d ^ %d = %d\n", a, b, power(a, b));
    printf("GCD: gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    printf("LCM: lcm(%d, %d) = %d\n", a, b, lcm(a, b));

    return 0;
}
