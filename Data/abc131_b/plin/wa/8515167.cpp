#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <queue>
#include <map>
#include <numeric>
#include <unordered_map>
#include <iomanip>
#include <functional>
#include <bitset>
#include <complex>
#include <stack>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(i,n) for(int i = (int)(n-1); i >= 0; i--)
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
typedef long long ll;
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
ll n,l;cin>>n>>l;
if(n+l-1<=0){
cout<<n+l-1<<endl;
}
else if(l*(n-l-1)<=0){
cout<<0<<endl;
}
else {
cout<<l<<endl;
}
return 0;
}
