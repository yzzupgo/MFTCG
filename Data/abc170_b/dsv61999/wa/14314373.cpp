#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (ll i = 0; i < (int)(n); i++)
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#include <iomanip>
#include <queue>
using ll =long long;
#define PI 3.14159265358979
using P = pair<ll , ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;
int main(){
ll x, y;
cin >> x>>y;
if(y <= 4*x && y%2==0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
