#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <bitset>
#include <vector>
#include <queue>
#include <map>
#include <set>
#define i64 int64_t
#define ff(ii,nn,mm) for(int ii=nn;ii<mm;ii++)
#define st(vvv) sort(vvv.begin(),vvv.end())
#define rvs(vvv) reverse(vvv.begin(),vvv.end())
int inf = 1000000007;
i64 giant = 4000000000000000000;
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int sum = 0;
int pre = inf;
ff(i, 1, n + 1) {
int a= l + i - 1;
sum += a;
pre = min(abs(a), pre);
}
cout << sum - pre << endl;
return 0;
}
