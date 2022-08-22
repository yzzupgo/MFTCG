#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;
using namespace std;
const long long INF = 1LL << 60;
ll mod = 1e9 + 7;
int main()
{
int n;
cin >> n;
if (n < 10)
{
cout << n << endl;
}
else if (n < 100)
{
cout << 9 << endl;
}
else if (n < 1000)
{
cout << 9 + (n - 99) << endl;
}
else if (n < 10000)
{
cout << 9 + 901 << endl;
}
else if (n < 100000)
{
cout << 9 + 901 + (n - 9999) << endl;
}
else
{
cout << 90909 << endl;
}
return 0;
}
