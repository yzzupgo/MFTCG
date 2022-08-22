#include <cstdio>
int main()
{
int N;
int L;
scanf("%d %d", &N, &L);
int tmp = ((N + 1) * N / 2) + ((L - 1) * N);
int ans;
if (L * (L + N - 1) <= 0) {
ans = tmp;
} else if (L > 0) {
ans = tmp - L;
} else {
ans = tmp - (L + N - 1);
}
printf("%d\n", ans);
return 0;
}
