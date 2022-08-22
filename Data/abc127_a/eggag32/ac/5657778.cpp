#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define debug(x) cout << #x << ": " << x << endl
#define repn(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,a) for(int i = 0; i < (a); i++)
#define all(v) v.begin(), v.end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define endl '\n'
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int a, b;
cin >> a >> b;
if(a >= 13) cout << b << endl;
else if (a <= 5) cout << 0 << endl;
else cout << b / 2 << endl;
return 0;
}
