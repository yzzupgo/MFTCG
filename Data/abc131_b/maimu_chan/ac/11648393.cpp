#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (ll)(n); i++)
int main() {
ll N,L;
cin >> N >> L;
ll M = 300;
ll min = 0;
ll out = 0;
rep(i,N) out += L+i;
rep(i,N){
if(abs(L+i)<M){
M = abs(L+i);
min = L+i;
}
}
cout << out-min << endl;
return 0;
}
