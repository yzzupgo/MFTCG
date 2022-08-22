#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
#define all(v) v.begin(),v.end()
#define zeros(arr) memset(arr,0,sizeof(arr));
#define precise(num) cout<<fixed; cout << std::setprecision(num)
#define nl cout<<"\n";
#define test int t;cin>>t;while(t--)
const int maxx = 1e6+1 , limit = 9*1e18 , MOD=1e9+7;
string binary(int n){bitset<60>b(n) ;string p =b.to_string();return p;}
int decimal(string n) { int dec_value = 0; int base = 1; for (int i = n.size() - 1; i >= 0; i--) { if (n[i] == '1')
dec_value += base; base = base * 2; } return dec_value; }
bool isPrime(int n){if (n <= 1) return false; if (n <= 3) return true;if (n % 2 == 0 || n % 3 == 0) return false;
for (int i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false; return true; }
int pow (int x, int n,int mod) {if (n == 0) return 1; int res = pow (x, n / 2,mod);res = (res * res) % mod;if (n % 2) res = (res * x ) % mod;return res;}
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int32_t main(){
int x,y;
cin>>x>>y;
int es = y - 2*x;
if(es%2 == 0){
es = es/2;
if(es > x){
cout<<"No\n";
}else{
cout<<"Yes\n";
}
}else{
cout<<"No\n";
}
}
