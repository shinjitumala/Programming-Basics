/* ex3-3
   hoshino.s.af
   Hoshino Shinji */

#include<stdio.h>

int comb(int n, int k);

int main(void){
  int input_n, input_k;

  scanf("%d %d", &input_n, &input_k);
  printf("%d", comb(input_n, input_k));

  return 0;
}

int comb(int input_n,int  input_k){
  if(input_n == input_k){                        //コンビネーションを再帰的定義する。n = k の時　1
    return 1;
  }else if(input_k == 0){                        //k = 0 の時1
    return 1;
  }else if(input_k == 1){                        //k = 1 の時n
    return input_n;
  }else{                                         //それ以外の場合
    return(comb(input_n - 1, input_k - 1) + comb(input_n - 1, input_k));
  }
}
