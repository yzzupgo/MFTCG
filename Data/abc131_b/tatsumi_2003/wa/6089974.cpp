#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;
int comp(const void* a, const void* b){
return *(int*)a - *(int*)b;
}
int main() {
int n, l, ans = 0, mine = 999;
int par[205];
cin >> n >> l;
for(int i = 1; i < n+1; i++){
par[i-1] = abs(l+i-1);
ans += par[i-1];
mine = min(mine, par[i-1]);
}
cout << ans - mine << endl;
}
