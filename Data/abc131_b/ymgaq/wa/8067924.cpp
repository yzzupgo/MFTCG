#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
#define rep(i,n) for(int i=0;i<n;++i)
#define rep2(i,x,n) for(int i=x;i<n;++i)
int main()
{
int n,l;
cin >> n >> l;
vector<int> t(n);
int sum = 0;
rep(i,n)
{
t[i] = l-i;
sum += l-i;
}
int ans = 0;
int min_diff = 1e9;
rep(i,n)
{
if(abs(t[i]) < min_diff)
{
min_diff = abs(t[i]);
ans = sum - t[i];
}
}
cout << ans << endl;
return 0;
}
