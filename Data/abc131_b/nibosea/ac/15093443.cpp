#include <bits/stdc++.h>
using namespace std;
using ll =long long;
typedef pair<int,int> P;
#define SORT(a) sort((a).begin(),(a).end())
#define REV(a) reverse((a).begin(),(a).end())
#define For(i,a,b) for(int i = (a) ; i < (b) ; ++i)
#define rep(i,n) For(i, 0, n)
#define debug(x) cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
void coY() {cout <<"Yes"<<endl;}
void coN(){cout <<"No"<<endl;}
int main()
{
int n, l;
cin >> n >> l;
vector<int> a(n);
int sum = 0;
int memo = 0;
int aaa = 0;
rep(i,n){
a[i] = l + i;
if(i == 0) {
memo = abs(a[i]);
aaa = a[i];
}
sum += a[i];
if(chmin(memo,abs(a[i]))){
aaa = a[i];
}
a[i] = abs(a[i]) ;
}
cout << sum - aaa << endl;
}
