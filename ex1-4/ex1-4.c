/* ex1-4
   hoshino.s.af
   Shinji Hoshino */

#include <stdio.h>

int main(void){
  float weight;
  float height;
  float bmi;

  scanf("%f %f", &height, &weight);
  height = height / 100;               //　身長を㎝換算
  bmi = weight / (height * height);    //　BMI計算　
  printf("%.2f", bmi);

  return 0;
}
