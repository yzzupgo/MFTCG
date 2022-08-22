#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n);i++)
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;
int main() {
int n;
int ans = 0;
cin >> n;
ans = 1.08 * n;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
