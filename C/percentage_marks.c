#include <stdio.h>
int main() {
    float s1, s2, s3, s4, s5, total;
    printf("Enter marks for 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    printf("Total: %.2f\nPercentage: %.2f%%\n", total, total / 5.0);
    return 0;
}