#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <numeric>
#include <cmath>
#define rep(i,n) for (int i = 0; i < n; ++i)
#define repr(i,n) for (int i = n; i > 0; --i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int MAX = 100;
const int INF = (1<<12);
int main() {
int X, Y;
cin >> X >> Y;
rep(i,X){
rep(j,X){
if(Y == (i * 2 + j * 4)) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
