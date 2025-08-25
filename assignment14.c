#include <stdio.h>
#include <math.h>

int main() {
    float number;
    int intPart;
    float fracPart;

    
    printf("Enter a number (positive or negative): ");
    scanf("%f", &number);

   
    intPart = (int)number;

   
    fracPart = number - intPart;

    
    if (fracPart < 0) {
        fracPart = -fracPart;
    }

   
    printf("Original number: %.2f\n", number);
    printf("Integer (cell) part: %d\n", intPart);
    printf("Fractional (float) part: %.2f\n", fracPart);

    return 0;
}
