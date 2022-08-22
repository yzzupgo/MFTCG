#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PI acos(-1)
#define lp lower_bound
#define up upper_bound
#define str string
#define fe first
#define se second
#define endl '\n'
#define mod 1e9+7
#define vi vector
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define triangle(n) (n*(n+1))/2
#define triangle2(n) (n*n+1)/2
ll lcm(ll a, ll b) {
return (max(a, b) / __gcd(a, b)) * min(a, b);
}
void person_bool(bool x) {
cout << (x ? "YES" : "NO") << endl;
}
struct edge {
ll a, b;
};
int main() {
fast
ll t = 1;
while(t--) {
double n;
cin >> n;
n *= 1.08;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
return 0;
}
