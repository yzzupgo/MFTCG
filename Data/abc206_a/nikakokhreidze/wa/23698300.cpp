#include<bits/stdc++.h>
#define no cout << "no" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define yes cout << "yes" << endl
#define Yes cout << "Yes" << endl
#define YES cout << "YES" << endl
#define fesvi(n) sqrt(n)
#define Reverse(v) reverse(v.begin(), v.end())
#define lb lower_bound
#define ub upper_bound
#define sz(v) v.size()
#define all(v) v.begin(), v.end()
#define f first
#define s second
#define ll long long
#define pb push_back
#define For(i,n) for (long long i = 1; i <= n; i++)
#define rFor(i,n) for (long long i = n; i >= 1; i--)
#define Scan_Grid(v) for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> v[i][j];
#define Print_Grid(v) for (int i = 1; i <= n; i++) { for (int j = 1; j <= m; j++) cout << v[i][j] << " "; cout << endl; }
#define Scan_Vector(v) for (auto& elem : v) cin >> elem;
#define Print_Vector(v) for (auto& elem : v) cout << elem << " ";
#define Sort(v) sort (v.begin(), v.end());
#define Print_Yes_No(k) if (k == true) cout << "YES" << endl; else cout << "NO" << endl;
using namespace std;
using namespace std::chrono;
void solve() {
int n;
cin >> n;
double pas = (double)n * 1.08;
if(pas == 206) {
cout << "so-so";
}
if(pas > 206) {
cout << ":(";
}
if(pas < 206) {
cout << "Yay!";
}
}
int main() {
int t = 1;
while(t--) {
solve();
}
}
