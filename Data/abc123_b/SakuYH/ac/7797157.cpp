#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) (x).begin(),(x).end()
#define dup(x,y) (((x)+(y)-1)/(y))
#define sz(x) (int)(x).size()
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main(){
    vector<int> v(5);
    rep(i,5) cin >> v[i];
    int ans = 0;
    int m = 0;
    rep(i,5){
        ans += dup(v[i],10)*10;
        if(v[i]%10 != 0 && 10-v[i]%10 >= m){
            m = 10 - v[i]%10;
        }
    }
    cout << ans - m << endl;
    return 0;
}