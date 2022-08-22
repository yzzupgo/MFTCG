#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
int main() {
int x, y;
cin >> x >> y;
if (2 * x <= y && y <= 4 * x&&y%2==0)cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
