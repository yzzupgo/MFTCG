#include<iostream>
#include<unordered_map>
#include<bitset>
#include<math.h>
#include<vector>
#include<set>
#include<algorithm>
#include<ctype.h>
#include<unordered_set>
#include<string>
#include<iomanip>
#include<queue>
#include<limits>
#include<map>
#include<stack>
#include<iterator>
#include<cstring>
#include<deque>
#include<chrono>
using namespace std;
#define pi 3.141592653589793238
#define MOD 1000000007
#define INF 999999999999999999
#define pb push_back
#define ff first
#define ss second
#define mt make_tuple
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define f0 get<0>
#define f1 get<1>
#define f2 get<2>
typedef vector<ll> vi;
typedef vector<vi> vvi;
int main() {
fast;
ll T = 1, i, j;
while (T--) {
ll x, y;
cin >> x >> y;
ll a, b;
b = (y - 2*x) / 2;
a = 3 * x - y;
bool ans = true;
if(a + b != x){
ans = false;
}
if(2 * a + 4 * b != y){
ans = false;
}
if(!ans){
cout << "No";
}
else{
cout << "Yes";
}
}
return 0;
}
