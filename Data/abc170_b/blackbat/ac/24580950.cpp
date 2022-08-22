#include <bits/stdc++.h>
#define rep(i,n) for (int i =0;i<n;i++)
#define reps(i,s,e) for (int i = s;i<e;i++)
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;const ll infl = 1LL << 60;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;
template <class T> int chmin(T &a,T b){if(a>b){a=b;return 0;}return 1;}
template <class T> int chmax(T &a,T b){if(a<b){a=b;return 0;}return 1;}
int main(){
int X,Y;
cin >> X >> Y;
bool flag=false;
rep(i,100){
if(X < i) break;
int ans = 2*i + 4*(X - i);
if(Y==ans)flag = true;
}
if(flag)cout << "Yes" << endl;
else cout << "No" << endl;
}
