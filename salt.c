#include <math.h>
#include <stdio.h>

void salting(char pass[]);

int main() {
  // char name[]= {'s','f','g','p','t','\0'};
  char pass[100];
  scanf("%s", pass);
  salting(pass);

  return 0;
}
void salting(char pass[]) {
  char salt[] = "123";
  char newPass[200];

  strcpy(newPass, pass);
  strcat(newPass, salt);
  puts(newPass);
}