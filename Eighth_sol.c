/*The author deserves a special mention for using cmd args*/
#include <stdio.h> 
#include <string.h> 
unsigned long long str_to_ull(char * str, int base) {
  int i;
  unsigned long long ull = 0;
  for (i = 0; str[i] != 0; i++) {
    ull *= base;
    ull += str[i] - '0';
  }
  return ull;
}
void print_ull(unsigned long long ull, int base) {
  if (ull / base > 0) print_ull(ull / base, base);
  printf("%d", ull % base);
}
int main(int argc, char * argv[]) {
  char * OPTION;
  char * SIZE;
  char * NUMBER;
  unsigned long long number = 0;
  if (argc < 4) {
    printf("Missing input arguments\n");
    return -1;
  }
  OPTION = argv[1];
  SIZE = argv[2];
  NUMBER = argv[3];
  if (strcmp(OPTION, "-b") == 0) {
    number = str_to_ull(NUMBER, 2);
    print_ull(number, 10);
    return 0;
  }
  if (strcmp(OPTION, "-d") == 0) {
    number = str_to_ull(NUMBER, 10);
    print_ull(number, 2);
    return 0;
  }
  printf("Invalid input arguments\n");
  return -1;
}
