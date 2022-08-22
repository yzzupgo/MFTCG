#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
double a = 2 * x - y * 0.5;
double b = y * 0.5 - x;
if (a >= 0 && b >= 0 && int(a*b) == a*b ){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
