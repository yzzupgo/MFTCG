#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int test=x*2;
if((y-test)%2==0&&(y-test)<=test) cout << "Yes";
else cout << "No";
}
