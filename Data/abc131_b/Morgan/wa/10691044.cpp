#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();
typedef long long ll;
int main()
{
int n,l;
cin >> n >> l;
int ans = 0;
for(int i=2; i<=n; i++){
ans += l+i-1;
}
cout << ans << endl;
return 0;
}
