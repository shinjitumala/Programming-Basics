/* ex3-1
   hoshino.s.af
   Hoshino Shinji */

#include<stdio.h>
#include<math.h>

int countDiv(int);

int main(void){
  int i;
  int count;

  scanf("%d", &i);
  count = countDiv(i);
  if(count == 2){
    printf("%d prime", count);        //約数が２個であれば、素数
  }else{
    printf("%d not prime", count);    //約数が２個以外であれば、素数でない
  }

  return 0;
}

int countDiv(int i){
  int count = 0;
  int rem;
  int num;
  double squared;

  squared = sqrt(i);
  for(num = 1; num <= squared; num++){                 //１からその数の平方根までの整数で割る
    rem = i % num;
    if(rem == 0 && num < squared){                     //余りがゼロかつnumが平方根でない時、約数カウントを2増やす
      count += 2;
    }else if(rem == 0 && num == squared){               //数が平方根の時、一回のみカウント
      ++count;
    }
  }

  return(count);
}
