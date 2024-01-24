#include <math.h>
#include <stdio.h>

int main() {
  int marks;
  printf("Please enter your marks: ");
  scanf("%d", &marks);

  if (marks >= 90 && marks <= 100) {
    printf("you have A+");
  } else if (marks < 90 && marks >= 70) {
    printf("you have A");
  } else if (marks < 70 && marks >= 30) {
    printf("you have B");
  } else if (marks < 30 && marks >= 0) {
    printf("you have C");
  } else {
    printf("wrong marks");
  }

  // marks >= 30 ? printf("You have passed"): printf("You have failed");

  return 0;
}
