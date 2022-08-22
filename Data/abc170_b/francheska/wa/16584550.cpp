#include <bits/stdc++.h>
using namespace std;
int x, y;
int main(){
cin >> x >> y;
cout << (y - x <= 0 ? "No" : (y - 2 * x) & 1 ? "No" : ((y - 2 * x) / 2 <= x ? "Yes" : "No")) << endl;
}
