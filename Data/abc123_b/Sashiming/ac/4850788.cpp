/*
        _            _                  _            _       _     _         _   _          _          _             _        
       / /\         / /\               / /\         / /\    / /\  /\ \      /\_\/\_\ _     /\ \       /\ \     _    /\ \      
      / /  \       / /  \             / /  \       / / /   / / /  \ \ \    / / / / //\_\   \ \ \     /  \ \   /\_\ /  \ \     
     / / /\ \__   / / /\ \           / / /\ \__   / /_/   / / /   /\ \_\  /\ \/ \ \/ / /   /\ \_\   / /\ \ \_/ / // /\ \_\    
    / / /\ \___\ / / /\ \ \         / / /\ \___\ / /\ \__/ / /   / /\/_/ /  \____\__/ /   / /\/_/  / / /\ \___/ // / /\/_/    
    \ \ \ \/___// / /  \ \ \        \ \ \ \/___// /\ \___\/ /   / / /   / /\/________/   / / /    / / /  \/____// / / ______  
     \ \ \     / / /___/ /\ \        \ \ \     / / /\/___/ /   / / /   / / /\/_// / /   / / /    / / /    / / // / / /\_____\ 
 _    \ \ \   / / /_____/ /\ \   _    \ \ \   / / /   / / /   / / /   / / /    / / /   / / /    / / /    / / // / /  \/____ / 
/_/\__/ / /  / /_________/\ \ \ /_/\__/ / /  / / /   / / /___/ / /__ / / /    / / /___/ / /__  / / /    / / // / /_____/ / /  
\ \/___/ /  / / /_       __\ \_\\ \/___/ /  / / /   / / //\__\/_/___\\/_/    / / //\__\/_/___\/ / /    / / // / /______\/ /   
 \_____\/   \_\___\     /____/_/ \_____\/   \/_/    \/_/ \/_________/        \/_/ \/_________/\/_/     \/_/ \/___________/    
                                                                                                                              
*/
#include<bits/stdc++.h>
using namespace std;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, n) for(int i = 0;i < (n);++i)

#define endl '\n'
#define pb emplace_back
#define mkp make_pair
#define p_q priority_queue
#define INF 2000000000
#define PI 3.1415926

const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};
const int dx_8[]={1,1,0,-1,-1,-1,0,1}, dy_8[]={0,-1,-1,-1,0,1,1,1};
const long long MOD = 1e9+7;

typedef long long ll;
// #define int long long

template <typename T> inline T GCD(T a,T b){T c;while(b!=0){c=a%b;a=b;b=c;}return a;}
template <typename T> inline T LCM(T a,T b){T c=GCD(a,b);a/=c;return a*b;}
template <typename T> inline T nCr(T a,T b){T i,r=1;for(i=1;i<=b;i++){r*=(a+1-i);r/=i;}return r;}
template <typename T> inline T nHr(T a,T b){return nCr(a+b-1,b);}

signed main(void){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a[5], ans = 0, mn = -1;
  REP(i, 5){
    cin >> a[i];
    ans += 10*((a[i]+9)/10);
    mn = max(mn, 10*((a[i]+9)/10)-a[i]);
  }
  cout << ans-mn << endl;

  return 0;
}