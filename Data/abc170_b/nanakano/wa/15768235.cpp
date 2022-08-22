#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
bool can = false;
int kame=1;
for (int i=1; i<=X; i++){
kame = X - i;
int res = 2 * i + 4 * kame;
if (res == Y) can = true;
}
if (can) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
