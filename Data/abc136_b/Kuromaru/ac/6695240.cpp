#include <iostream>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
#define MOD 1000000007
#define INF 1e9+7
#define rep(i,n) for(int i=0; i<n; ++i)
typedef long long ll;
#define MAX_N 100000
#define MAX_M 100000
#define MAX_V 100
#define MAX_E 100
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
int ddx[] = {-1, 0, 1, 0, -1, 1, -1, 1};
int ddy[] = {0, -1, 0, 1, 1, 1, -1, -1};
int cnt;
bool func(int x) {
int a = 0;
while(x!=0) {
++a;
x /= 10;
}
if(a%2==1) return true;
else return false;
}
int main() {
int n;
cin >> n;
for(int i=1; i<=n; ++i) {
if(func(i)) {
++cnt;
}
}
cout << cnt << endl;
return 0;
}
