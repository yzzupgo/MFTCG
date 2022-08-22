#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<cmath>
#include<cstdio>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define pai 3.1415926535897932384
using namespace std;
using ll =long long;
using P = pair<int,int>;
int main(int argc, const char * argv[]) {
int X, Y;
cin >> X >> Y;
bool ans=false;
for(int i=0; i<=X; i++){
if(i*2 + (X-i)*4 == Y) ans=true;
}
if(ans) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
