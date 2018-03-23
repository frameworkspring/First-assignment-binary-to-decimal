#include <stdio.h> 
void main() {
  int number, binary_val, decimal_val = 0, base = 1, rem;
  printf("Enter a binary number(1s and 0s) \n");
  scanf("%d", & number);
  binary_val = number;
  while (number > 0) {
    rem = number%10;
    decimal_val = decimal_val + rem * base;
    number = number/10;
    base = base * 2;
  }
  printf("The Binary number is = %d \n", binary_val);
  printf("Its decimal equivalent is = %d \n", decimal_val);
}
