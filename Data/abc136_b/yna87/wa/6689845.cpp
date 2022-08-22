#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << '\n';
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = (int)1e9;
const int MOD = (int)1e9 + 7;
int main(void){
int N;
cin >> N;
int res = 0;
if(N == 100000) res += 90000;
else if(N >= 10000) res = N - 100000 + 1;
if(N >= 1000) res += 900;
else if(N >= 100) res = N - 100 + 1;
if(N >= 10) res += 9;
else res = N;
cout << res << '\n';
return 0;
}
