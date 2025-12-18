#include <stdio.h>
#include "calc.h"

int _add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
int mul(int x, int y) {
    return x * y;
}
int divide(int x, int y) {
    if (y == 0) {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle error as needed
    }
    return x / y;
}
int fac(int n) {
    if (n < 0) {
        printf("Error: Factorial of negative number\n");
        return 0; // Return 0 or handle error as needed
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fac(n - 1);
}
int mod(int x, int y) {
    if (y == 0) {
        printf("Error: Modulus by zero\n");
        return 0; // Return 0 or handle error as needed
    }
    return x % y;
}
int power(int base, int exp) {
    if (exp < 0) {
        printf("Error: Negative exponent not supported\n");
        return 0; // Return 0 or handle error as needed
    }
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        printf("Error: LCM of zero\n");
        return 0; // Return 0 or handle error as needed
    }
    return (a * b) / gcd(a, b);
}
