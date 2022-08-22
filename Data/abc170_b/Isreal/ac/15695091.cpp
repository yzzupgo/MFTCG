#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back
#define endl '\n'
#define snd second
#define fst first
#define fastio cin.tie(NULL),cout.sync_with_stdio(true)
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <int> vi;
typedef pair <ll, int> ii;
typedef pair <ii,int> iii;
const int mod = 1e9 + 7;
const int N = 100005;
void solve(){
int a, b, ans = 1;
cin >> a >> b;
int y = (b-2*a)/2;
if(y < 0 or ((b-2*a)%2) != 0)ans = 0;
int x = a-y;
if(x < 0 or x+y > a)ans = 0;
cout << (ans?"Yes":"No") << '\n';
}
int main(){
fastio;
int t = 1;
while(t--)
solve();
return 0;
}
