#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define repr(i,a,b) for(int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
#define rall(v) (v).rbegin(), (v).rend()
#define FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;
typedef long long int lli;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return true; } return false; }
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int main(){
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++){
int j = x - i;
if ((2*i + 4*j) == y){
cout << "Yes" << endl;
}
}
cout << "No" << endl;
}
