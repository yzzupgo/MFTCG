#include <bits/stdc++.h>
using namespace std;
#define MOD (1000000000+7)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define all(x) x.begin(), x.end()
#define print(vec,l,r) for(int i = l; i <= r; i++) cout << vec[i] <<" "; cout << endl;
#define forf(i,a,b) for(int i = (a); i < (b); i++)
#define forr(i,a,b) for(int i = (a); i > (b); i--)
#define input(vec,N) for(int i = 0; i < (N); i++) cin >> vec[i];
typedef long long int ll;
void solve(){
ll X, Y;
cin >> X >> Y;
if(Y%2 != 0){
cout << "No" << endl;
return;
}
ll Z = Y/2;
if(Z > 2*X) cout << "No" << endl;
else cout << "Yes" << endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
T = 1;
while(T--){
solve();
}
return 0;
}
