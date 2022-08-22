#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define INF ((1LL<<62)-(1LL<<31))
typedef long long ll;
int main()
{
int n,l;
cin >> n >> l;
int sum=0;
rep(i,n) sum+=i+l;
if(l<0&&n+l>0) cout << sum << endl;
else if(l>0) cout << sum-l << endl;
else cout << sum-(n+l-1) << endl;
return 0;
}
