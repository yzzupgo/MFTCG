#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
int main(){
int x,y;
cin >> x >> y;
string ans;
if((4*x-y)>=0 && (-2*x+y)>=0 && y%2==0){
ans = "Yes";
}else{
ans = "No";
}
cout << ans << endl;
return 0;
}
