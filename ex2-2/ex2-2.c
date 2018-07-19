/* ex2-2
   hoshino.s.sf
   Shinji Hoshino */

#include <stdio.h>

int main(void){
  int num1;
  int num2 = 0;

  scanf("%d", &num1);
  while(1){
    num2 += num1 % 10;      //num1の一番下の桁をnum2に加える
    num1 /= 10;             //num1の一番下の桁を消去
    if(num1 == 0) break;
    num2 *= 10;             //num2を１０倍する
  }

  printf("%d", num2);

  return 0;
}
