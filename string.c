#include <math.h>
#include <stdio.h>

void print(char arr[]);

int main() {
  // char name[]= {'s','f','g','p','t','\0'};
  char fname[]="tareq";
  char lname[]="mahmud";
  print(fname);
  printf("\n");
  print(lname);

  // for (ch i=0;i<=10;i++){
  //   printf("%s\t",fname[i])
  // }

  return 0;
}
void print(char arr[]){
  for(int i=0;arr[i] !='\0';i++){
    printf("%c\t",arr[i]);
  }
}