#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i,a,n) for(ll i=a;i<(ll)(n);i++)
int main(){
int X,Y;
cin>>X>>Y;
for(int i=1; i<=X; i++){
for(int j=X-i; i+j<=X; j++){
if(i*2+j*4 == Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
