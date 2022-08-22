#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int x, y;
bool f = 0;
int main()
{
cin.sync_with_stdio(0); cin.tie(0);
cin >> x >> y;
for(int i = 1; i <= x; i++){
if((y-i*2)%4 == 0){
if(i+(y-i*2)/4 == x){
f = 1;
}
}
}
if(f)cout << "Yes";
else cout << "No";
return 0;
}
