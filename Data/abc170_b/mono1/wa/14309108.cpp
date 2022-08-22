#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) FOR(i,0,n)
int main(){
int x,y;
cin >> x >> y;
for(int i=0; i<=x; i++){
for(int j=0; j<=x-i; j++){
if(2*i + 4*j == y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
