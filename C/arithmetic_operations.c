#include <stdio.h>
int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Sum: %.2f\nSub: %.2f\nMul: %.2f\nDiv: %.2f\n", a+b, a-b, a*b, a/b);
    return 0;
}