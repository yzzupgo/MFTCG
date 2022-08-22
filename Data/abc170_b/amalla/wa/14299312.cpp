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
if (Y/2>=X && Y/4<=X) cout << "Yes";
else cout << "No";
}
