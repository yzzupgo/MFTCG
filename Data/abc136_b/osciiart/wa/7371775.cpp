#include <iostream>
#include <set>
#include <map>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <string.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
#define REP(i,n) for(long long i = 0; i < (long long)(n); i++)
#define pb push_back
#define INF (ll)1e18
ll mod = 1e9+7;
int main() {
ll N;cin>>N;
ll ans = 0;
REP(i,N){
if (i+1<10) ans++;
else if (100<=i+1 and i+1<1000) ans++;
else if (10000<=i+1) ans++;
}
cout << ans << endl;
}
