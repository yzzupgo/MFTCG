#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <deque>
#include <queue>
#include <string>
#include <map>
#include <cstring>
#include <stack>
#include <set>
#include <assert.h>
#include <cmath>
using namespace std;
typedef unsigned long long ll;
int main() {
int n, l;
cin >> n >> l;
int sum = 0;
for(int i = 1; i <= n; i ++){
sum += l + i - 1;
}
int res = 0;
for(int i = 1; i <= n; i ++){
res = max(res, abs(sum-(l+i-1)));
}
cout << res;
return 0;
}
