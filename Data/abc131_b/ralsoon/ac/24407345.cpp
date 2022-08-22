#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int N, L;
cin >> N >> L;
int n = L;
vector<int> v(N);
generate(v.begin(), v.end(), [&n]()
{
auto t = n;
n++;
return t;
});
int sum = accumulate(v.begin(), v.end(), 0);
if (L < 0 && 0 < N + L - 1)
{
cout << sum << endl;
}
else if (L >= 0)
{
cout << sum - L << endl;
}
else
{
cout << sum - (N + L - 1) << endl;
}
}
