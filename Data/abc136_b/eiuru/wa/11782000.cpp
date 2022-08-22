#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <math.h>
#include <cassert>
#define rep(i,n) for(int i = 0; i < n; ++i )
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int n;
cin >> n;
int ans = 0;
int d = 1;
while(d<n){
if(n>=d*10){
ans += 9*d;
}else{
ans += n-d+1;
}
d*=100;
}
cout << ans << endl;
}
