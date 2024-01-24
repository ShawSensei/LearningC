#include <math.h>
#include <stdio.h>
void hello();
void goodbye();

int sum(int a, int b);
void printTable(int n);

int main() {
  int a, b,n;
  printf("Enter the first number:");
  scanf("%d", &n);
  printf("Enter the second number:");
  scanf("%d", &b);

  printTable(n);

  int s = sum(a, b);
  printf("%d\n", s);
  return 0;
}

void hello() { printf("hello\n"); }
void goodbye() { printf("goodbye\n"); }

int sum(int a, int b) { return a + b; }
void printTable(int n) {
  for (int i = 1; i <= 10; i++) {
    printf("%d\n",i * n);
  }
}