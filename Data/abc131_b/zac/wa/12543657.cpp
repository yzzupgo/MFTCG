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
int n,l;
cin>>n>>l;
int sum=(n-1)*n/2;
int ate=0;
int a=l,b=l+n-1;
if(a>=0) ate=a;
else if(b<=0) ate=b;
cout<<sum-ate<<endl;
}
