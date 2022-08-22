#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; i++)
#define REPR(i,n) for(int i = n; i >= 0; i--)
#define FOR(i,m,n) for(int i = m; i < n; i++)
typedef long long ll;
static const int MAX = 200000;
static const ll MX = 1e18;
using namespace std;
#define M 1064527
int main(){
ll X, Y, ans;
cin >> X >> Y;
if(Y%2==1) cout << "No" << endl;
else if(X*4<Y) cout << "No" << endl;
else{
REP(i, X){
ans=i*4+abs(X-i)*2;
if(ans==Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
