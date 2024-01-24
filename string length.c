#include <math.h>
#include <stdio.h>

void print(char arr[]);
int count(char arr[]);

int main() {
  // char name[]= {'s','f','g','p','t','\0'};
  char str[100];
  fgets(str,100,stdin);
  printf("Length is:%d",count(str));
  


  
  return 0;
}
int count(char arr[]){
  int count=0;
  for(int i=0;arr[i] !='\0';i++){
    printf("%c\t",arr[i]);
    count++;
  }
  return count-1;
}