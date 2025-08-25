#include<stdio.h>
int main(){
int a,lastDigit ;
    printf("Enter an integer: ");
    scanf("%d",&a);

    lastDigit = a % 10;


    if (lastDigit < 0) {
      lastDigit = -lastDigit;
      }


      printf("the Last digit of %d is : %d\n" , a , lastDigit);


      return 0;


    }
