#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
int main() {
int X,Y;
cin >> X >> Y;
bool flag = false;
rep(i,X){
if((i+1)*2 + (X - i -1)*4 == Y){
flag = true;
break;
}
}
if(flag){
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
