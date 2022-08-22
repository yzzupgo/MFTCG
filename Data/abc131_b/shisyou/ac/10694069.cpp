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
vector<int> taste(N);
int total = 0;
rep(i, 0, N)
{
taste.at(i) = L + i;
total += taste.at(i);
}
if (L >= 0)
{
total -= taste.at(0);
}
else if (L + N - 1 < 0)
{
total -= taste.at(N - 1);
}
cout << total << endl;
}
