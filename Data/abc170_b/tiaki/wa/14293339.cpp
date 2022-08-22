#include <bits/stdc++.h>
#define INF 1e18
#define Rep(i,a,n) for (int i = (a); i < (n); i++)
#define rep(i,n) Rep(i, 0, n)
#define all(a) (a).begin(), (a).end()
#define MAX 1000
#define ll long long
#define P pair<int,int>
#define cout_set(n) cout << setprecision(10) << (n) << endl;
const double PI=3.14159265358979323846;
using namespace std;
const int mod = 1000000007;
int vy[4] ={1,-1,0,0}, vx[4] = {0,0,-1,1};
signed main(){
int x,y; cin >> x >> y;
if(y >= x*2 && y <= x*4) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
