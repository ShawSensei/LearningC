#include <math.h>
#include <stdio.h>

int main() {
  int day;
  printf("Please enter your day: ");
  scanf("%d", &day);

  switch(day) {
    case 1 : printf("monday");
             break;
    case 2 : printf("tuesday");
     break;
    case 3 : printf("thursday");
     break;
    case 4 : printf("wednesday");
     break;
    case 5 : printf("friday");
     break;
    default: printf("kuch bhi din");
    
    
  }
    


  return 0;
}
