/*  ex4-2
    hoshino.s.af
    Hoshino Shinji  */

#include<stdio.h>
#include<math.h>

int main(void){
  int num;
  int i;
  int k;

  scanf("%d", &num);               //入力した数をnに保存

  int numbers[num + 1];                //１からnまでの整数を保存する配列を用意

  for(i = 1; i <= num; i++){      //1からnまでの整数を配列に保存
    numbers[i] = i;
  }


  //エラトステネスの篩を用いて素数だけを取り出す。
  numbers[1] = 0;                //0に設定したものは排除されたものとして扱う。まずは、素数でない０を先に排除。

  for(i = 2; i <= sqrt(num); i++){    //素数の倍数を０に設定し排除。
    for(k = 2; i * k <= num; k++){
      numbers[i * k] = 0;
    }
  }

  //残された数は全て素数なので、それを表示する。
  for(i = 1; i <= num; i++){
    if(numbers[i] != 0){
      if(i != 2){     //空白を適切に入れる
        printf(" ");
      }
      printf("%d", numbers[i]);
    }
  }

  return 0;
}
