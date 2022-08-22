#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,n) for (int i = 1; i <= (int)(n); i++)
#define all(x) (x).begin(), (x).end()
const ll INF = ll(1e18)+1;
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
ll x,y;
cin >> x >> y;
bool result = false;
rep(i,x){
if((i+1)*2+(x-i-1)*4 == y){
result = true;
}
}
if(result){
cout << "Yes";
}
else{
cout << "No";
}
}
