#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;
int main()
{
int n, l;
cin >> n >> l;
int a[n];
int ans = INT_MAX;
rep(i, n)
{
a[i] = l+i;
ans = min(ans, abs(l+i));
}
int sum = accumulate(a, a+n, 0);
cout << sum-ans << endl;
return 0;
}
