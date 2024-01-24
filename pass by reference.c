#include <math.h>
#include <stdio.h>

void work(int a, int b,int *sum,int *tot,int *avg);

int main() {
  int a=3,b=5;
  int sum,tot,avg;
  work(a,b,&sum,&tot,&avg);
  
  printf("sum=%d & total=%d & avg=%d",sum,tot,avg);
  


  return 0;
}

void work(int a, int b,int *sum,int *tot,int *avg){
  *sum = a+b;
  *tot =a*b;
  *avg = (a+b)/2;
  
  
  
}
