#include <bits/stdc++.h>
using namespace std;
using ll =long long;
typedef pair<int,int> P;
#define SORT(a) sort((a).begin(),(a).end())
#define rSORT(a) reverse((a).begin(),(a).end())
#define For(i,a,b) for(int i = (a) ; i < (b) ; ++i)
#define rep(i,n) For(i, 0, n)
#define debug(x) cerr << #x << " = " << (x) << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
int main()
{
int x, y;
cin >> x >> y;
rep(i,100){
int kame = x - i;
if(2*i + 4*kame == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
