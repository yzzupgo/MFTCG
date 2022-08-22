#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
int main() {
int x_2, y_2;
int X, Y;
cin >> X >> Y;
y_2 = Y - 2 * X;
x_2 = 4 * X - Y;
if(x_2 > 0 && y_2 > 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
