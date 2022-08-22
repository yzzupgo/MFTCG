#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
typedef long long ll;
#define _GLIBCXX_DEBUG
typedef vector<int> vec;
typedef vector<ll> lvec;
typedef vector<char>cvec;
typedef pair<ll, ll> LP;
typedef tuple<ll, ll, ll> LT;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;
int main() {
int n,l,ans;
cin>>n>>l;
int sum=0;
rep(i,n) sum+=i+l;
if(l>=0) ans=sum-l;
if(l<0) ans=sum-(l+(l+n)/2);
cout<<ans<<endl;
}
