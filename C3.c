#include <stdio.h>

int main() {
    int num1 = 40;
    int num2 = 30;

    int sum = num1 + num2;
    int diff = num1 - num2;
    float p = num1 * num2; // Explicitly casting to float
    float div = (float) num1 / num2; // Ensuring float division
    int rem = num1 % num2;

    printf("%d %d %.2f %.4f %d\n", sum, diff, p, div, rem);
    return 0;
}
