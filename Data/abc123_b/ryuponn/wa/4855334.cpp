#include <stdio.h>

int main() {
  int i,j,k,x[5];
  int t = 0;
  scanf("%d", &x[0]);
  scanf("%d", &x[1]);
  scanf("%d", &x[2]);
  scanf("%d", &x[3]);
  scanf("%d", &x[4]);

  i = x[0] % 10;
  j = 0;
  for(int m = 1;m < 5;m++){
    if(i > x[m] % 10){
      i = x[m] % 10;
      j = m;
    }
  }
  for(int m = 0;m < 5;m++){
    if(m == j){
      t = t + x[m];
    }
    else if(x[m] % 10 == 0){
      t = t + (x[m] / 10) * 10;
    }
    else{
      t = t + (x[m] / 10) * 10 + 10;
    }
  }
  printf("%d",t );
}
