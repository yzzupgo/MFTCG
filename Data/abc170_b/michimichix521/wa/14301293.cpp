#include<algorithm>
#include<bitset>
#include<climits>
#include<cmath>
#include<complex>
#include<deque>
#include<functional>
#include<iomanip>
#include<iostream>
#include<iterator>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>
using namespace std;
typedef long long ll;
typedef long double lb;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
int main() {
ll x,y;
cin >> x >> y;
if(x*4 < y){
cout << "No" << endl;
return 0;
}
if(y%2 == 0){
cout << "Yes" << endl;
return 0;
}
}
