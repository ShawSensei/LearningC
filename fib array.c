#include <math.h>
#include <stdio.h>

void fib(int n);



int main() {
  int n;
  printf("enter val:");
  scanf("%d",&n);

  int fib[n];
  fib[0]=0;
  fib[1]=1;
  printf("0   1  ");

  for(int i=2;i<=n;i++){
    fib[i]=fib[i-1]+fib[i-2];
    printf("%d\t",fib[i]);
  }
  
  
  

  return 0;
}
