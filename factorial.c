#include <math.h>
#include <stdio.h>

int main() {
  int i;
  int n;
  int sum = 1;

  printf("Please input a number:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {

    sum *= i;
  }
  printf("sum is %d\n", sum);

  return 0;
}
