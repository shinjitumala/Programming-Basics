/* ex2-1
   hoshino.a.af
   Shinji Hoshino */

#include <stdio.h>

int main(void){
  int i;                 //代入される値
  int sum = 0;           //各桁の和
  int rem;               //余りを保存するのに用いる変数

  scanf("%d", &i);
  while(i != 0){         //下の位から数を消しながら、下の位の数を和に足していく
    rem = i % 10;
    i = i / 10;
    sum = sum + rem;
  }
  printf("%d", sum);

  return 0;
}
