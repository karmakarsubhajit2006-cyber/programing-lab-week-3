#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;      
    double perimeter, area, s;

    
    printf("Enter the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        perimeter = a + b + c;

      
        s = perimeter / 2;

        
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        
        printf("Perimeter of the triangle = %.2lf\n", perimeter);
        printf("Area of the triangle = %.2lf\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;

}

