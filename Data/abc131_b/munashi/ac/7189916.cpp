#include <iostream>
int main()
{
int N, L;
std::cin >> N >> L;
int m = 10000;
int ans = N;
for (int i = 0; i < N; i++) {
if(abs(L + i) < m) {
m = abs(L + i);
ans = i;
}
}
int sum = 0;
for (int i = 0; i < N; i++) {
if (i == ans) continue;
sum += (L + i);
}
std::cout << sum << std::endl;
return 0;
}
