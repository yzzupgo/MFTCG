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
int ate;
if(l>=0) ate=l;
if(l<=1) ate=l+n-1;
cout<<sum-ate<<endl;
}
