#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define W(x,y) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << y;
#else
#define W(x,y)
#endif
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vii = vector<pii>;
using vl = vector<ll>;
using vll = vector<pll>;
using ld = long double;
#define ff first
#define ss second
const ld pi = acosl(-1);
const ll prime = 1000000000 + 7;
const ll INF = 1000000000;
int main(){
#ifdef ONLINE_JUDGE
ios::sync_with_stdio(false);
cin.tie(0); cout.tie(0);
#endif
ll n;
cin >> n;
ll res = 0;
for(int i = 1; i <= n; i++){
if(to_string(i).size() % 2 == 1){
res++;
}
}
cout << res << "\n";
return 0;
}
