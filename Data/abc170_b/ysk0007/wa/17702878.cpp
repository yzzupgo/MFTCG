#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
#define all(x) (x).begin(),(x).end()
const int M = 1e9+7;
void solve(){
int x,y;
cin>>x>>y;
int res = x*4;
bool flg = false;
if(res == y){
cout<<"Yes"; return;
}
while(res>y){
res -=2 ;
if(res == y){
flg = true; break;
}
}
if(flg)
cout<<"Yes";
else
cout<<"No";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
solve();
return 0;
}
