#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();
const int inf = numeric_limits<int>::max();
typedef long long ll;
int main()
{
int n,l;
cin >> n >> l;
int taste_max = 0;
for(int i=1; i<=n; i++){
taste_max += l+i-1;
}
int ans;
int taste_diff = inf;
for(int i=1; i<=n; i++){
int taste = l+i-1;
if (abs(taste) < abs(taste_diff)){
taste_diff = taste;
ans = taste_max - taste;
}
}
cout << ans << endl;
return 0;
}
