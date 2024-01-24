#include <math.h>
#include <stdio.h>

// void salting(char pass[]);
void slice(char str[],int n,int m);

int main() {
  // char name[]= {'s','f','g','p','t','\0'};
  char str[]="HowAreYou";
  slice(str,3,6);
  

  return 0;
}

void slice(char str[],int n,int m){
  char newStr[100];
  int j=0;
  for(int i=n;i<=m;i++,j++){
    newStr[j]=str[i];
  }
  newStr[j]='\0';
  puts(newStr);
}

// void salting(char pass[]) {
//   char salt[] = "123";
//   char newPass[200];

//   strcpy(newPass, pass);
//   strcat(newPass, salt);
//   puts(newPass);
// }