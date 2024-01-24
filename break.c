#include <math.h>
#include <stdio.h>

int main() {
  int i = 0;
  int n;
  while (i <= 10) {
    printf("Please input a number:");
    scanf("%d", &n);

    if (n % 2 != 0) {
      printf("odd");
      break;
    }
  }
  return 0;
}
