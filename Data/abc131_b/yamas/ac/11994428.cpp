#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define REP(i,n) for (int i = 1; i < (int)(n); i++)
#define Sort(a) sort(a.begin(), a.end())
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
template <class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;} return false;}
template <class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;} return false;}
int main(){
int n, l;
cin >> n >> l;
ll sum = 0;
if(l >= 0)
REP(i, n){
sum += i+l;
}
else if(l + n <= 0)
rep(i, n-1){
sum += i+l;
}
else
rep(i, n){
sum += i+l;
}
cout << sum << endl;
return 0;
}
