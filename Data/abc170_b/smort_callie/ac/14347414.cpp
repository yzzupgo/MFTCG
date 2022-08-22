#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int test=x*2;
int test2=x*4;
if(y%2==0&&y>=test&&y<=test2) cout << "Yes";
else cout << "No";
}
