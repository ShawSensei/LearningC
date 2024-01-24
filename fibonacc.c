#include <math.h>
#include <stdio.h>

int fibonac(int n);

int main() {

  printf("temp is %d\n", fibonac(6));
  return 0;
}

int fibonac(int n) {

  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  int fib1 = fibonac(n - 1);
  int fib2 = fibonac(n - 2);

  int series = fib1 + fib2;
  printf("fib of %d is: %d\n", n, series);
  return series;
}
