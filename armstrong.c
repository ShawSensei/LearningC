#include <math.h>
#include <stdio.h>

int main() {
  int arm;
  printf("Please enter to chack armstrong number:");
  scanf("%d", &arm);
  int temp = arm;
  int result;

  while (temp != 0) {
    int remainder = temp % 10;
    

    result += remainder * remainder * remainder;

    temp = temp / 10;
    
  }
  if(result==arm){
    printf("it is a armstrong number");
    
  }
  else{
    printf("It is not an armstrong number");
  }
  return 0;
}
