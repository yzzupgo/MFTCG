#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main(){
int a, b;
cin >> a >> b;
int ans;
if (a < 6){
ans = 0;
}
else if (a < 13){
ans = b / 2;
}
else {
ans = b;
}
cout << ans <<endl;
return 0;
}
