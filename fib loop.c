#include <math.h>
#include <stdio.h>

int t1 = 0;
int t2 = 1;

int fib(int n);

int main() {
  

  printf("fib is %d %d ", t1, t2);
  fib(7);

  printf("fib is %d", t2);
  return 0;
}

int fib(int n) {
  for (int i = 3; i <= n; i++) {
    int temp = t1 + t2;
    printf("%d ",temp);
    t1 = t2;

    t2 = temp;
  }

  return t1;
  return t2;
}
