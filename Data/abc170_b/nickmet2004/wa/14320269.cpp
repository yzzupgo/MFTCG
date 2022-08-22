#include<bits/stdc++.h>
using namespace std;
int main (){
int x , y;
cin >> x >> y;
int a = (y - 2 * x);
if(a % 2 != 0) cout << "No" << endl;
else {
a /= 2;
int b = x - a;
if(b >= 0 && a >= 0) cout << "Yes" << endl;
}
}
