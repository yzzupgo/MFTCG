#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int x, y;
cin >> x >> y;
cout << (y % 2 == 0 && y >= 2 * x && y <= 4 * x ? "YES" : "NO");
return 0;
}
