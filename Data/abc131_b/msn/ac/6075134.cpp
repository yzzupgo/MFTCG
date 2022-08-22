#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <tuple>
#include <utility>
#include <stdlib.h>
#include <set>
#include <map>
using namespace std;
#define rep(i,n,x) for(int i=n;i<x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.begin(),x.end(),greater<int>())
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define setp(x) setprecision(x)
using LL = long long;
using ULL = unsigned long long;
int main() {
LL n, l;
cin >> n >> l;
LL sum = 0, num = 0;
num = l + n - 1;
rep(i, 1, n + 1) sum += (l + i - 1);
rep(i, 1, n + 1) {
int aji = l + i - 1;
if (aji == 0) {
cout << sum << endl;
return 0;
}
}
if (num <= 0) {
cout << sum - num << endl;
}
else {
cout << sum - l << endl;
}
return 0;
}
