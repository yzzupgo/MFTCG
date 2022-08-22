#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
int N;
int Nlen = 0;
scanf("%d", &N);
int tmp = N;
int count = 9;
int start = 1;
int cur = 0;
int ret = 0;
while (tmp) {
ret += min(N-start+1, count);
count *= 10;
start *= 10;
tmp /= 10;
}
printf("%d\n", ret);
return 0;
}
