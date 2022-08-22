#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cstdio>
#include<list>
#include<set>
#include<bitset>
#define rep(i,n) for(int i=0; i<(n); i++)
#define fixed_setprecision(n) fixed << setprecision((n))
#define pai 3.1415926535897932384
#define NUM_MAX 2e18
#define NUM_MIN -1e9
using namespace std;
using ll =long long;
using P = pair<int,int>;
int main() {
int n, l;
cin >> n >> l;
int min_value=1e9+1;
int value=0;
for(int i=l; i<l+n; i++){
if(abs(i)<abs(min_value)) min_value = i;
value+=i;
}
cout << value-min_value << endl;
return 0;
}
