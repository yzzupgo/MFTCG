#define rep(i,n) for(int i = 0; i < (int)n; i++)
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifdef LOCAL
std::ifstream in("b.txt");
std::cin.rdbuf(in.rdbuf());
#endif
int N, L;
cin >> N >> L;
int apple_max = 0;
for (int bite = 1; bite <= N; bite++)
{
int apple = 0;
for (int i = 1; i <= N; i++)
{
int taste = L + i -1;
if (i == bite)
{
}
else
{
apple += taste;
}
}
if (apple > apple_max)
{
apple_max = apple;
}
}
cout << apple_max;
return 0;
}
