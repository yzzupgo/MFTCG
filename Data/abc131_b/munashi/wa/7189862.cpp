#include <iostream>
int main()
{
int N, L;
std::cin >> N >> L;
int m = L + N;
int ans = N;
for (int i = 0; i < N; i++) {
if(abs(L + i - 1) < m) {
m = abs(L + i - 1);
ans = i;
}
}
int sum = 0;
for (int i = 0; i < N; i++) {
if (i == ans) continue;
sum += (L + i -1);
}
std::cout << sum << std::endl;
return 0;
}
