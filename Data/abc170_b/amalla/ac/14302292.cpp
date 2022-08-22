#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int X,Y;
cin >> X >> Y;
if (Y%2==1) {
cout << "No";
return 0;
}
if (Y>=X*2 && Y<=X*4) cout << "Yes";
else cout << "No";
}
