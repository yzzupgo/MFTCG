#include <iostream>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
int answer = 0;
int eatApple = 0;
int minAbs = abs(L);
for (int i = 0; i < N; i++)
{
answer += L + i;
if (minAbs > abs(L + i)) {
minAbs = abs(L + i);
eatApple = L + i;
}
}
answer -= eatApple;
cout << answer << endl;
return 0;
}
