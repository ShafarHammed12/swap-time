#include<stdio.h>
int main() {
      int firstNumber, secondNumber, tempNumber;
      printf("Enter first number: ");
      scanf("%i", &firstNumber);
      printf("%i \n", firstNumber);
      
      printf("Enter second number: ");
      scanf("%i", &secondNumber);
      printf("%i \n", secondNumber);

      tempNumber = firstNumber;
      firstNumber = secondNumber;
      secondNumber = tempNumber;

      printf("First Number after swapping is %i \n", firstNumber);
      printf("Second Number after swapping is %i", secondNumber);
      return 0;
}