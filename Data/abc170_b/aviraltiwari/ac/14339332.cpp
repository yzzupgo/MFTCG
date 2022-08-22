#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
float x, y; cin >> x >> y;
float a = y / 2 - x;
float b = x - a;
if ((b == 0 && a == 0 )|| b < 0 || a < 0) cout << "No" << "\n";
else if (b == floor(b) && a == floor(a)) cout << "Yes" << "\n";
else cout << "No" << "\n";
}
