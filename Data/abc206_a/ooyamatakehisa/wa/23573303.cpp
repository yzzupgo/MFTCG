#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <climits>
using namespace std;
#define FOR(i,a,b) for(int i=(a),i ##formax=(b);i<i ##formax;i++)
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
int main() {
int n;
cin >> n;
int x = floor(n * 1.08);
if(x == 206) {
cout << "so-so" << endl;
} else if(x < 206) {
cout << "Yey!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
