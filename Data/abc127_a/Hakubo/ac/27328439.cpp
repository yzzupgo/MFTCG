#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
int main() {
int x, y;
string s;
cin >> x >> y;
if(x<=5){
y = 0;
}else if(x<=12){
y /= 2;
}
cout << y << endl;
return 0;
}
