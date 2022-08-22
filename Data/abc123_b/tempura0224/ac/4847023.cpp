#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<assert.h>
#include<numeric>
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

int main(){
    int a[5];
    int ans=0;
    rep(i,5){
        cin>>a[i];
        ans+=(a[i]+9)/10*10;
    }
    int ma=10;
    rep(i,5)if(a[i]%10!=0)ma=min(a[i]%10,ma);
    if(ma!=0)cout<<ans+ma-10<<endl;

    return 0;
}
