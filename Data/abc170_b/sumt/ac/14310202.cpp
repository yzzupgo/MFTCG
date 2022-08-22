#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (ll)(n); i++)
int main(){
int a, b;
cin >> a >> b;
rep(i, 100)
rep(j, 100){
if(i + j == a)
if(2 * i + 4 * j == b){
cout << "Yes" << endl;
return(0);
}
}
cout << "No" << endl;
}
