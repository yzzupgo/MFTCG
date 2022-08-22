#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <set>
#include <math.h>
#include <map>
#include <stack>
using namespace std;
static const int INF = 1e9+7;
typedef long long ll;
typedef pair<ll, ll> P;
#define rep(i,n) for (int i = 0; i < n; i++)
#define repr(i,a,b) for (int i =a; i < b; i++)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define PI 3.14159265359
int main(){
int X, Y; cin >> X >> Y;
int b;
string ans = "No";
for(int i=1; i<=X; ++i){
b = X - i;
if(2 * i + 4 * b == Y){
ans = "Yes";
}
}
cout << ans << endl;
return 0;
}
