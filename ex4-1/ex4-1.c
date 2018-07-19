/*    ex4-1
      hoshino.a.af
      Shinji Hoshino     */

#include<stdio.h>
#include<math.h>

double pearson(int num, double vec1[], double vec2[]);

int main(void){
  double v1[10] = {7.6,  3.7, 9.9, 4.6, 9.4, 8.4, 5.8, 3.7, 7.3, 2.6};     //ベクトルを定義
  double v2[10] = {6.9,  4.0, 9.2, 5.1, 8.5, 7.6, 5.2, 3.6, 6.4, 2.8};
  double v3[10] = {4.5,  4.5, 5.4, 4.2, 0.8, 4.1, 2.5, 2.0, 6.1, 2.3};
  double v4[10] = {3.1, -0.8, 4.5, 0.4, 8.6, 4.2, 3.4, 1.8, 1.2, 0.3};

  printf("%.6lf\n", pearson(10, v1, v2));       //各相関係数を画面に表示
  printf("%.6lf\n", pearson(10, v1, v3));
  printf("%.6lf\n", pearson(10, v1, v4));
  printf("%.6lf\n", pearson(10, v2, v3));
  printf("%.6lf\n", pearson(10, v2, v4));
  printf("%.6lf", pearson(10, v3, v4));

  return 0;
}


double pearson(int num, double vec1[], double vec2[]){                  //ピアソン関数
  double pearson_cor;                    //ピアソン相関係数
  double mean1 = 0, mean2 = 0;           //各ベクトルの平均値
  double var1 = 0, var2 = 0;             //各ベクトルの分散　x　データ数
  double mult = 0;                       //各ベクトル成分の平均からの差をかけたもの
  int i;

  for(i = 0; i < num; i++){           //各ベクトルの平均値を計算
    mean1 += vec1[i] / num;
    mean2 += vec2[i] / num;
  }


  for(i = 0; i < num; i++){           //var1, var2, mult をピアソン相関係数の計算のために先に計算する
    var1 += (vec1[i] - mean1) * (vec1[i] - mean1);
    var2 += (vec2[i] - mean2) * (vec2[i] - mean2);
    mult += (vec1[i] - mean1) * (vec2[i] - mean2);
  }

  pearson_cor = mult / sqrt(var1) / sqrt(var2);      //ピアソン相関係数を計算

  return pearson_cor;                //返り値
}
