#include <stdio.h>


/* Function prototypes */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/* Function implementations */
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Division by zero error\n");
        return 0;
    }
    return a / b;
}

int mod(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Modulo by zero error\n");
        return 0;
    }
    return a % b;
}
