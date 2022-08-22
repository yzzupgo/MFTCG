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
int res = sum;
for(int i = 1; i <= n; i ++){
if(abs(l+i-1) < abs(res)){
res = l+i-1;
}
}
cout << sum - res << endl;
return 0;
}
