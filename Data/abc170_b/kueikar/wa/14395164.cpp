#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
bool ans = false;
for(int i=0;i<=X;i++){
int j = X - i;
if( Y == 2*i + 4*j) ans = true;
}
if(ans) {
cout << "YES" << endl;
}
else {
cout << "NO" << endl;
}
}
