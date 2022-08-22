#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i,j,n) for(int i = (j); i < (int)(n); i++)
#define print(t) cout << t << endl
#define SIZE(s) ll(s.size())
#define ALL(x) x.begin(), x.end()
#define Pair pair<ll, ll>
#define printif(s,t,u) cout << (s ? t : u) << endl
const ll INF = 1000000007;
int main(){
int X, Y; cin >> X >> Y;
bool j = false;
rep(i, 0, X) if(i * 2 + (X - i) * 4 == Y) j = true;
printif(j, "Yes", "No");
}
