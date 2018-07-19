/* ex1-1
   hoshino.s.af
   Shinji Hoshino */


#include <stdio.h>

int main(void){
  int var_int;

  scanf("%d", &var_int);
  var_int = 0 - var_int;
  printf("%d", var_int);

  return 0;
}
