#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
int main(){
ll T = 1;
while (T--){
int x; int y;
cin >> x >> y;
int a = y % 2;
if (a > 0) {
cout << "No" << endl;
return 0;
} else if (y > x*4) {
cout << "No" << endl;
return 0;
} else {
int b = x; int c = 0;
while (b >= 0){
if (b*4 + c*2 == y) {
cout << "Yes" << endl;
return 0;
} else {
c++; b--; }
}
cout << "No" << endl;
}
}
}
