#include <iostream>
#include <iomanip>
#include <utility>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i = 0; i<n; ++i)
#define REP(i,n) for(int i = 1; i<n; ++i)
const int INF = 100100100;
const int MOD = (int)1e9 + 7;
typedef long long ll;
int main(){
int n,l;cin>>n>>l;
int sum = (l+l+n-1)*n/2;
if(l<0&&0<l+n-1){cout<<sum<<endl; return 0;}
else if(0<=l){cout<<sum-l<<endl; return 0;}
else {cout<<sum-(l+n-1)<<endl;return 0;}
}
