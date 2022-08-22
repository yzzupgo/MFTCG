#include <bits/stdc++.h>
#define int long long
using namespace std;

//typedef
//------------------------------------------
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector<PII> VP;


//REPEAT
//------------------------------------------
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define RFOR(i, m, n) for(int i = m;i > n;i--)
#define REP(i,n)  FOR(i,0,n)
#define RREP(i,m)  RFOR(i,m,0)

//container util
//------------------------------------------
#define pb(a) push_back(a)
#define fst first
#define snd second
#define SORT(V) sort((V).begin(),(V).end())
#define REV(V) reverse((V).begin(),(V).end())

//constant
//------------------------------------------
const int MOD = 1000000007;
const int INF = 1061109567;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

//grobal variable
//------------------------------------------


//def function
//------------------------------------------

//main
//------------------------------------------

signed main(){
  VI num(5);
  REP(i, 5){
    cin >> num.at(i);
  }

  int ans=0;
  int mini=10;
  REP(i, 5){
    if(num.at(i)%10!=0){
      ans += (num.at(i)/10+1)*10;
      mini = min(mini, num.at(i)%10);
    }else{
      ans += num.at(i);
    }
  }
  if(mini!=10) ans += mini%10 - 10;
  cout << ans << endl;
  return 0;
}
