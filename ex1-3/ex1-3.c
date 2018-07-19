/* ex1-3
   hoshino.s.af
   Shinji Hoshino */

#include<stdio.h>

int main(void){
  int a;
  int a100;
  int a10;
  int a1;

  scanf("%d", &a);
  a100 = a / 100;                        // 100の位
  a10 = a % 100 / 10;                    // 10の位
  a1 = a % 10;                           // 1の位
  printf("%d", a100 + a10 + a1);

  return 0;
}
