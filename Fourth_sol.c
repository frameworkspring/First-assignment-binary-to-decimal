#include <stdio.h> 
#include <string.h> 
#include <math.h> 
int main() {
  int i, len, sum = 0, dup;
  char user_inp[100];
  printf("Enter the Binary Number:\t");
  scanf("%s", & user_inp);
  len = strlen(user_inp);
  dup = len;
  for (i = 0; i <= len; i++, dup--) {
    if (user_inp[i] == '1') {
      sum = sum + pow(2, dup - 1);
    }
  }
  printf("Decimal Number:\t%d", sum);
  return 0;
}
