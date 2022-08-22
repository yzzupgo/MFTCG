#include<stdio.h>
#include<math.h>
int main(){
int N,i;
int cnt = 0;
int digit;
scanf("%d", &N);
for(i = 1; i <= N; i++){
digit = (int)log10((double)i)+1;
if (digit%2==1)
{
cnt++;
}
}
printf("%d", cnt);
return 0;
}
