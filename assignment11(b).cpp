#include<stdio.h>
int main(){
int b,lastDigit ;
    printf("Enter an integer (b): ");
    scanf("%d",&b);

    lastDigit = b % 10;


    if (lastDigit < 0) {
      lastDigit = -lastDigit;
      }


      printf("the Last digit of %d is : %d\n" , b , lastDigit);


      return 0;


    }