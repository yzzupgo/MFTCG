#include<bits/stdc++.h>
using namespace std;
bool ok(int x, int y){
if(y % 2)return false;
y /= 2;
if(x <= y && y <= 2*x)return true;
return false;
}
int main(){
int x, y;
cin >> x >> y;
cout << (ok(x, y) ? "Yes" : "no") << endl;
}
