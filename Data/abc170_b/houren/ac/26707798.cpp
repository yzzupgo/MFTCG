#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
using P = pair<int,int>;
#define rep(i,n) for(int i = 0; i < n; i++)
#define all(x) (x).begin(),(x).end()
int main(){
int n,m;
cin >> n >> m;
int tot = 2 * n;
rep(i,n+1){
if(tot==m){
cout << "Yes" << endl;
return 0;
}
tot += 2;
}
cout << "No" << endl;
return 0;
}
