#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#define INF 1000000000
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
typedef long long int ll;
using namespace std;
int main() {
int n, l; cin >> n >> l;
int sum = 0;
int ans = INF;
for (int i = 1; i <= n; i++) {
sum += i + l - 1;
if (abs(ans) > abs(i + l - 1)) {
ans = i + l - 1;
}
}
cout << sum - ans << endl;
return 0;
}
