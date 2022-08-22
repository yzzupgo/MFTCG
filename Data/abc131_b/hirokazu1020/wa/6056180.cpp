#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<cmath>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<numeric>
#include<functional>
#include<algorithm>
#include<bitset>
#include<tuple>
#include<unordered_set>
#include<unordered_map>
#include<random>
#include<array>
#include<cassert>
using namespace std;
#define INF (1<<29)
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(v) v.begin(),v.end()
#define uniq(v) v.erase(unique(all(v)),v.end())
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int N, L;
cin >> N >> L;
int ans = 0;
rep(i,N) {
ans += L + i;
}
if (0 <= L) {
ans -= L;
}
else if (0 <= N + L + 1) {
}
else {
ans -= N + L - 1;
}
cout << ans << endl;
return 0;
}
