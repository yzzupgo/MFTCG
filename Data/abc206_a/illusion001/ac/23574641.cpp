#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ld long double
#define vll vector<ll>
#define vvl vector<vector<ll>>
#define pll pair<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define sortrev(x) sort(x.rbegin(),x.rend())
#define op(x) cout<<x<<"\n"
#define opl(x) cout<<x<<" "
#define br cout<<"\n"
#define show(x) if(debug) {cout<<(#x)<<" : "<<x<<"\n";}
#define MOD 1000000007
#define MAX 200005
bool debug = true;
void TLEsol() {
ld n;
cin >> n;
n *= 1.08;
n = floor(n);
if(n < 206) {
op("Yay!");
} else if(n == 206) {
op("so-so");
} else {
op(":(");
}
}
int main() {
fastio;
int t = 1;
while(t--) {
TLEsol();
}
return 0;
}
