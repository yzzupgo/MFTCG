#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define INF ((1LL<<62)-(1LL<<31))
typedef long long ll;
int main()
{
int n,l;
cin >> n >> l;
int sum=0,mi=1000;
rep(i,n) {
mi=min(mi,abs(i+l));
sum+=i+l;
}
if(n+l<0) cout << sum+mi << endl;
else cout << sum-mi << endl;
return 0;
}
