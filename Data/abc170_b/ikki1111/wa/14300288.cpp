#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a; i<n; i++)
#define ll long long
#define all(x) begin(x), end(x)
#define toInt(x) (x - '0')
#define pll pair<ll, ll>
#define pli pair<ll, int>
#define INF 1e+9
#define MAX_V 100008
vector<pair<ll, int>> factrized(ll num){
vector<pair<ll, int>> res;
for(ll i = 2; i * i <= num; i++){
if(num % i)continue;
res.emplace_back(i, 0);
while(num % i == 0){
num /= i;
res.back().second++;
}
}
if(num != 1) res.emplace_back(num, 1);
return res;
}
int main(){
int x, y;
cin >> x >> y;
int b = y - 2 * x;
int a = x - b / 2;
if (b % 2 == 0 && a >= 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
