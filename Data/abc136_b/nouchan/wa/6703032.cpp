#include<stdio.h>
#include<math.h>
int main(){
int N,i;
int cnt = 0;
int digit = 1;
scanf("%d", &N);
for(i = 1; i <= digit; i++){
digit = log10(i)+1;
if (digit%2==1)
{
cnt++;
}
}
printf("%d", cnt);
return 0;
}
