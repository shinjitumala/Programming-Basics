/*   ex3-4
     hoshino.s.af
     Hoshino Shinji  */


#include<stdio.h>
#include<math.h>

int factorial(int);
double approx_e(int);

int main(void){
  int input;
  double output;

  scanf("%d", &input);
  output = fabs(exp(2) - approx_e(input));    //誤差の計算
  printf("%.6lf", output);

  return 0;
}

double approx_e(int input){                   //exp(2)の近似値を計算する関数
  if(input == 0){
    return 1;
  }else{
    return approx_e(input - 1) + pow(2, input) / factorial(input);
  }
}

int factorial(int input){                  //階乗を計算する関数
  if(input > 0){
    return input * factorial(input - 1);
  }else{
    return 1;
  }
}
