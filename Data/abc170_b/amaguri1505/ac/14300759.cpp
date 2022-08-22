#include <bits/stdc++.h>
using namespace std;
int main() {
long int X,Y;
cin >> X >> Y;
if ((X*4) >= Y && (X*2) <= Y && Y % 2 == 0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
