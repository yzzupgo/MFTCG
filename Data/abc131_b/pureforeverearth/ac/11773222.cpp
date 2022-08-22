#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define PI 3.14159265359
#define INF 1000100100
#define all(x) (x).begin(),(x).end()
typedef long long ll;
#define P pair<int, int>
using namespace std;
int main(){
int n,l; cin >> n >> l;
int cor=0;
int ans;
rep(i,n) cor+=l+i;
rep(j,n){
int tmp=0;
rep(i,n){
if(i==j) continue;
tmp+=l+i;
}
if(j==0) ans=tmp;
else if(abs(ans-cor)>abs(tmp-cor)) ans=tmp;
}
cout << ans << endl;
return 0;
}
