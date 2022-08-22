#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define ignore std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
#define ppi pair<int ,pair<int,int>>
#define precise std::cout << std::fixed; std::cout << std::setprecision(10);
#define nl "\n"
#define REP(i,n) for(ll i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vi vector<int>
#define pi pair<int,int>
#define mi map<int,int>
#define dd double
#define lli long long int
#define ull unsigned long long
#define vs vector<string>
#define popcount(x) __builtin_popcount(x)
#define popcountll(x) __builtin_popcountll(x)
#define Y cout<<"YES"<<nl;
#define N cout<<"NO"<<nl;
#define max3(a,b,c) max(max(a,b),c)
#define debug(x) cout<< #x<<" "<<x<<endl;
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
using u64 = uint64_t;
int gcd(int a, int b) {
if(b == 0) {
return a;
} else {
return gcd(b, a % b);
}
}
void solve() {
int n;
cin >> n;
float t = 1.08;
int ans = (int)floor(float(n) * t);
if(ans == 206) {
cout << "so-so" << nl;
} else if(ans > 206) {
cout << ":(" << nl;
} else {
cout << "Yay !" << nl;
}
}
int main() {
fast
int t = 1;
while(t--) {
solve();
}
return 0;
}
