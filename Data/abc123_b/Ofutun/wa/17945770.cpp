//------------------------------------------
// C++ templete 
//------------------------------------------
#include <bits/stdc++.h>
using namespace std;

//type
//------------------------------------------
using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
using vs=vector<string>;

//REPEAT
//------------------------------------------
#define REP(i,a,b) for(int i=(a);i<(b);++i)

//container util
//------------------------------------------
#define pb push_back
#define paired make_pair
#define ALL(a) (a).begin(),(a).end()
#define PRINT(V) for (auto v : (V)) cout << v << " "
#define SORT(V) sort((V).begin(),(V).end())
#define RSORT(V) sort((V).rbegin(), (V).rend())
#define SZ(x) ((int)(x).size())

//constant
//------------------------------------------
const int MOD = 1000000007;
const long long INF = 10000000000000000;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

//math
//------------------------------------------
int QP(int a,int b){int ans=1;do{if(b&1)ans=1ll*ans*a%MOD;a=1ll*a*a%MOD;}while(b>>=1);return ans;}
int QP(int a,int b,int MOD){int ans=1;do{if(b&1)ans=1ll*ans*a%MOD;a=1ll*a*a%MOD;}while(b>>=1);return ans;}
int GCD(int a,int b){return b?GCD(b,a%b):a;}

//debug
//------------------------------------------
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;


//functions
//------------------------------------------
vi IntToVec(int bit, int N) {
    vi S(N, 0);
    REP(i, 0, N){ if(bit&(1<<i)){ S[i]=1; } }
    return S;
    /*vector<int> S;
    REP(i, 0, N){ if(bit&(1<<i)){ S.push_back(i); } }
    return S;*/
}

//grobal variable
//------------------------------------------
long long N,K,M;
vi Vec;


//main
//------------------------------------------

int krag(int Num){
    if(Num%10==0) return Num;
    else return Num+(10-Num%10);
}
int main(){

  vll V(5);
  REP(i, 0, 5) cin>>V[i];
  ll mn=INF, Sum=0, ix;
  REP(i, 0, 5){
      
      Sum+=krag(V[i]);
      if(mn > V[i]%10 && V[i]%10!=0){
          mn=V[i]%10;
      }
  }
  Sum-=10-mn;
  cout<<Sum<<endl;
  return 0;
}