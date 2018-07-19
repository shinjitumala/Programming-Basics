/* ex2-4
   hoshino.s.af
   Shinji Hoshino */

#include <stdio.h>

int main(void){
  int num1_0;
  int num2_0;
  int num1;
  int num2;
  int rem;

  scanf("%d %d", &num1_0, &num2_0);
  if(num1_0 < num2_0){                 //bの方がaより大きい場合は、後の処理の為にaとbを交換する
    num1 = num2_0;
    num2 = num1_0;
  }
  if(num1_0 >= num2_0){
    num1 = num1_0;
    num2 = num2_0;
  }

  while(1){                  //ユークリッド互除法の操作を行う
    rem = num1 % num2;
    if(rem == 0) break;        //余りが０になった時点で終了
    num1 = num2;
    num2 = rem;
  }

  printf("%d", num1_0 * num2_0 / num2);

  return 0;
}
