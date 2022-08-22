#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
int ans = 0;
for(int i=0;i<=X;i++){
if(Y == i * 2 + (X - i) * 4)ans++;
}
if(ans > 0)cout << "Yes" << endl;
else cout << "No" << endl;
}
