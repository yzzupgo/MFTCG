#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
string ans="NO";
int kame;
if(Y % 2 == 0){
kame = Y/2 -X;
if(0 <= kame && kame <= 100){
if(0 <= X - kame && X - kame <= 100){
ans = "YES";
}
}
}
cout << ans << endl;
}
