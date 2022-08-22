#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
int main() {
int X,Y;
cin >> X >> Y;
bool flag = false;
rep(i,X){
if(i*2 + (X - i)*4 == Y){
flag = true;
break;
}
}
if(Y == 2 * X){
flag = true;
}
if(flag){
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
