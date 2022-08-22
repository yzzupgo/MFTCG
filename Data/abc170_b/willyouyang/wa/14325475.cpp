#include<bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int a = (y - 2 * x) / 2;
int b = (4 * x - y) / 2;
if( a < 0 || b < 0) cout << "No";
else cout << "Yes";
return 0;
}
