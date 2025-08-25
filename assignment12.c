#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n;

    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    
    rate = rate / 100;


    amount = principal * pow((1 + rate / n), n * time);
    compoundInterest = amount - principal;

    
    printf("Compound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount after %.2lf years = %.2lf\n", time, amount);

    return 0;
}



