#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if ((4*x) >= y && y%2 == 0 && (2*x) <= y) { cout << "Yes" << endl;}
else { cout << "No" << endl;}
return 0;
}
