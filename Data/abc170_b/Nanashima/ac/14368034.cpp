#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <set>
#include <math.h>
#include <queue>
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool flag = false;
rep(i,x+1) {
int ans;
ans = i*2+(x-i)*4;
if (ans==y) flag = true;
}
if (flag) cout << "Yes" << endl;
else cout << "No" << endl;
}
