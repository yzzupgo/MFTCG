#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(void){
int x, y;
cin >> x >> y;
string ans = "No";
if(x == 1 && y == 2 )ans = "Yes";
if(x == 1 && y == 4 )ans = "Yes";
rep(i, x){
if((i * 2 + (x - i) * 4) == y){
ans = "Yes";
}
}
cout << ans << endl;
return 0;
}
