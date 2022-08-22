#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
bool flag = false;
for(int i = 0; i <= x; i++){
int legs = 2*i + 4*(x-i);
if(legs == y)flag = true;
}
string ans = "No";
if(flag)ans = "Yes";
cout << ans << endl;
}
