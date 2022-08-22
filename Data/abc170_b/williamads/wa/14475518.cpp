#include<bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define N 200123
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>
#define vpll vector<pll>
#define pb emplace_back
#define fs first
#define sc second
#define sz(x) ((int)((x).size()))
#define oo 100000012
#define mod 1000000007LL
#define M 10000123
using namespace std;
int f(int a, int b){
return a*2 + b*4;
}
int main(){
ios_base::sync_with_stdio(0);
int n, p;
cin >> n >> p;
int ok = 0;
for(int i = 0; i <= n; ++i){
for(int j = 0; j <= n; ++j){
if(f(i, j) == p){
ok = 1;
j = n + 1;
i = n + 1;
}
}
}
if(ok) cout << "Yes\n";
else cout << "No\n";
return 0;
}
