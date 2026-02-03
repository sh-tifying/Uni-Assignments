#include <stdio.h>
int main() {
    float f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    printf("Celsius: %.2f\n", (f - 32) * 5.0 / 9.0);
    return 0;
}