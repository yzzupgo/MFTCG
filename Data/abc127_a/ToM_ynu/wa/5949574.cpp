#include <bits/stdc++.h>
#include <numeric>
#define REP(i,s,n) for (int i = s; i < n; ++i)
#define rep(i,n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
#define LL long long
#define MOD 1000000007
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(a>12) cout<<b<<endl;
else if(6<a) cout<<0<<endl;
else{
cout<<b/2<<endl;
}
return 0;
}
