/* ex4-3
   hoshino.s.af
   Hoshino Shinji */

#include<stdio.h>

#define SIZE 8

int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE];

int main(void){
  //行列を読み込む
  int i, k, n, sum;

  FILE *fp1;   //行列A
  fp1 = fopen("matrix_a.txt", "r");
  if(fp1 == NULL){          //ファイルエラー処理
    fprintf(stderr, "error opening file!");
    return 1;
  }
  for(i = 0; i < SIZE; i++){    //行
    for(k = 0; k < SIZE; k++){   //列
      if(k != 0){   //空白飛ばし読み
        fscanf(fp1, " ");
      }
      fscanf(fp1, "%d", &matrix1[i][k]);
    }
  }
  fclose(fp1);

  FILE *fp2;   //行列B
  fp2 = fopen("matrix_b.txt", "r");
  if(fp2 == NULL){          //ファイルエラー処理
    fprintf(stderr, "error opening file!");
    return 1;
  }
  for(i = 0; i < SIZE; i++){    //行
    for(k = 0; k < SIZE; k++){   //列
      if(k != 0){    //空白飛ばし読み
        fscanf(fp2, " ");
      }
      fscanf(fp2, "%d", &matrix2[i][k]);
    }
  }
  fclose(fp2);

  //行列の掛け算を計算
  //AB
  FILE *fp3;
  fp3 = fopen("result_ab.txt", "w");
  for(i = 0; i < SIZE; i++){    //行
    for(k = 0; k < SIZE; k++){   //列
      if(k != 0){  //空白入力
        fprintf(fp3, " ");
      }
      sum = 0;
      for(n = 0; n < SIZE; n++){          //そのマスに入る数字の計算
        sum += matrix1[i][n] * matrix2[n][k];
      }
      fprintf(fp3, "%d", sum);
    }
    fprintf(fp3, "\n");
  }
  fclose(fp3);

  //BA
  FILE *fp4;
  fp4 = fopen("result_ba.txt", "w");
  for(i = 0; i < SIZE; i++){    //行
    for(k = 0; k < SIZE; k++){   //列
      if(k != 0){  //空白入力
        fprintf(fp4, " ");
      }
      sum = 0;
      for(n = 0; n < SIZE; n++){          //そのマスに入る数字の計算
        sum += matrix2[i][n] * matrix1[n][k];
      }
      fprintf(fp4, "%d", sum);
    }
    fprintf(fp4, "\n");
  }
  fclose(fp4);

  return 0;
}
