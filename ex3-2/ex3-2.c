/* ex3-2
   hoshino.s.af
   Hoshino Shinji  */

#include<stdio.h>

int f(int x, int y);

int main(void){
  int input_x, input_y;

  scanf("%d %d", &input_x, &input_y);
  printf("%d", f(input_x, input_y));

  return 0;
}

int f(int input_x, int input_y){
  int output;

  if(input_x < input_y){                    //x < y ならば、1
    output = 1;
  }else if(input_y == 0){                   //y = 0 ならば、-1
    output = -1;
  }else{                                    //それ以外の場合、再帰的定義
    output = f(input_x - 1, input_y - 1) - f(input_x - 1, input_y + 1);
  }

  return(output);                           //返り値
}
