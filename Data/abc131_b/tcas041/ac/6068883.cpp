#include<stdio.h>
int main()
{
int N;
int L;
scanf("%d %d", &N, &L);
int sum_taste = 0;
sum_taste = (L + (L + N - 1)) * N / 2;
if (L >= 0) {
sum_taste -= L;
}
else {
if (L + N <= 0) {
sum_taste -= (L + N - 1);
}
}
printf("%d", sum_taste);
return 0;
}
