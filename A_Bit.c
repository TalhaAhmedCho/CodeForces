#include <stdio.h>

int main() {
  int number, X = 0;
  scanf("%d", &number);

  char result[4];

  for (int i = 1; i <= number; i++) {
    scanf("%s", result);

    if (result[0] == 'X' && result[1] == '+') {
      X++;
    } else if (result[0] == 'X' && result[1] == '-') {
      X--;
    } else if (result[0] == '+' && result[2] == 'X') {
      ++X;
    } else if (result[0] == '-' && result[2] == 'X') {
      --X;
    }
  }
  
  printf("%d\n", X);
  return 0;
}