#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
const int MOD = 1e9+7;
using ll = long long;
using vi = vector<int>;
#define rep(i,n) for (int i = 0; i < n; i++)
#define ALL(x) x.begin(), x.end()
int main() {
int a,b,sum,MIN=5000;
cin >> a >> b;
rep(i,a){
sum += b+i;
if(abs(MIN)>abs(b+i))MIN=b+i;
}
cout << sum - MIN;
}
