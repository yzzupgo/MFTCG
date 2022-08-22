#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,begin,end) for (int i = begin; i < (int)(end); i++)
#define all(v) v.begin(), v.end()
const int MOD = 1000000007;
int main()
{
int N, L;
cin >> N >> L;
vector<int> taste(N), fabs(N);
int total = 0;
int min = 300;
rep(i, 0, N)
{
taste.at(i) = L + i;
total += taste.at(i);
}
rep(i, 0, N)
{
if (taste.at(i) >= 0)
{
if (taste.at(i) < min)
{
min = taste.at(i);
}
}
else
{
if (-taste.at(i < min))
{
min = taste.at(i);
}
}
}
cout << total - min << endl;
}
