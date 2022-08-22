#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
int N, L;
scanf("%d %d", &N, &L);
vector<int> apple(N);
int ans = 0;
int eatApple = 1000;
for (int i = 1; i < N + 1; i++) {
int taste = L + i - 1;
ans += taste;
eatApple = min(eatApple, abs(taste));
}
ans -= eatApple;
printf("%d", ans);
return 0;
}
