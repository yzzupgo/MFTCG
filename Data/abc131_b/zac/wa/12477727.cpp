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
int sum1=n*(n+1)/2;
vector<int>d(n);
rep(i,n)
d[i]=l+i;
int sum2=0;
if(l>0){
sort(rall(d));
rep(i,n-1)
sum2+=d[i];
}
else{
sum2=sum1-l;
}
cout<<sum2<<endl;
}
