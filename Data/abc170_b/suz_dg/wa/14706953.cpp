#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep1(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const double PI=acos(-1);
const int INF = numeric_limits<int>::max();
int main(){
int x, y;
cin >> x >> y;
rep1(i,x+1){
if(2 * i + 4 * (x-i) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
