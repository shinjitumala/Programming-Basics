/* ex2-3
   hoshino.s.af
   Shinji Hoshino */

#include <stdio.h>
#include <math.h>

int main(void){
  int num = 0;
  int limit;
  double a_0 = 1;                    //初期値設定
  double b_0 = 1 / sqrt(2);
  double t_0 = 0.25;
  double p_0 = 1;
  double a_1;
  double b_1;
  double t_1;
  double p_1;
  double s_n;

  scanf("%d", &limit);               //代入された整数を保存
  while(num < limit){
    a_1 = (a_0 + b_0) / 2;           //各数列の次の値を計算
    b_1 = sqrt(a_0 * b_0);
    t_1 = t_0 - p_0 * (a_0 - a_1) * (a_0 - a_1);
    p_1 = 2 * p_0;

    num += 1;                        //更新
    a_0 = a_1;
    b_0 = b_1;
    t_0 = t_1;
    p_0 = p_1;

  }

  s_n = (a_0 + b_0) * (a_0 + b_0) / (4 * t_0);     //s_nを計算
  
  printf("%.15lf", s_n);

  return 0;
}
