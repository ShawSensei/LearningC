#include <math.h>
#include <stdio.h>

int main() {
  int i;
  int n;
  int sum = 0;

  printf("Please input a number:");
  scanf("%d", &n);

  for(i=1;i<=n;i++){
    if(n%i==0){
      sum+=1;
    }
  }

  if (sum == 2) {
    printf("it is a prime");
  } else {
    printf("it is not prime");
  }

  return 0;
}
