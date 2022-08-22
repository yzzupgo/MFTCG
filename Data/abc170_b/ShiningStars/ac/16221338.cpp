#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const static ll INF = 1e15;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
const ll MOD = 1e9+7;
int main(){
int X, Y; cin >> X >> Y;
if(2*X <= Y && Y <= 4*X && Y % 2 == 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
