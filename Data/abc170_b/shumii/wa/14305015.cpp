#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int tsuru, kame;
kame = (x/2)-y;
tsuru = x - kame;
if(tsuru + kame == x && y == 2 * tsuru + 4 * kame){
cout << "Yes" << endl;
}
else cout << "No" << endl;
}
