#include <stdio.h> 
#include <conio.h> 
int main() {
  long long bin, dec = 0, base = 1, rem;
  printf("Enter any binary number : ");
  scanf("%ld", & bin);
  while (bin != 0) {
    rem = bin % 10;
    dec = dec + rem * base;
    base = base * 2;
    bin = bin / 10;
  }
  printf("Equivalent decimal value = %lld", dec);
  return 0;
}
