#include <bits/stdc++.h>
#define endl '\n'
#define _USE_MATH_DEFINES
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int i,x,y,ans = 0;
cin>>x>>y;
if(y>=x*2&&y<=x*4&&(y%2==0)){
cout<<"Yes";
}
else cout<<"No";
return 0;
}
