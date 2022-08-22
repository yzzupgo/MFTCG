#include <bits/stdc++.h>
using namespace std;
int main(){
long x,y;
cin >> x >> y;
if ((y % 2 == 0 ) && (2 * x <= y) && (y <= 4*x))
cout << "Yes" << endl;
else
cout << "No" << endl;
}
