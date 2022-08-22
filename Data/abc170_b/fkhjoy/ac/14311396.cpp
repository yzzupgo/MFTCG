#include <bits/stdc++.h>
using namespace std;
#define cel(n,k) ((n-1)/k+1)
#define sets(a) memset(a, -1, sizeof(a))
#define clr(a) memset(a, 0, sizeof(a))
#define dbg(x) cout << "Line " << __LINE__ <<": " << x << nl
#define nl "\n"
#define sp " "
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define file() freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout)
typedef long long ll;
typedef pair<int,int> pii;
const int N = 1e5+5;
int tc = 1;
int main(){
fastio();
while(tc--){
int x, y;
cin >> x >> y;
int ty = (y-2*x)/2;
int tx = (4*x-y)/2;
if(tx+ty == x and tx >= 0 and ty >= 0)
cout << "Yes" << nl;
else
cout << "No" << nl;
}
return 0;
}
