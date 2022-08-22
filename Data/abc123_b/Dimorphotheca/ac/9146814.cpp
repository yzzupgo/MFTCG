#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repone(i,n) for(int i=1;i<(int)(n);++i)
#define repo(i,o,n) for(int i=o;i<(int)(n);++i)
#define Rep(j,n) for(int j=0;j<(int)(n);++j)
#define Repo(j,o,n) for(int j=o;j<(int)(n);++j)
#define Repone(j,n) for(int j=1;j<(int)(n);++j)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define int long long
#define pb(a) push_back(a)
#define eraser(v,i) (v).erase(v.begin()+(i))
#define pbpair(a,b) push_back(make_pair(a,b))
#define MOD 1000000007
#define INF 9223372036854775807
#define pairint pair<int,int>
signed main()
{
int x=0,y=0,z=0,w=0,n=0,m=0,a=0,b=0;
std::vector<int> v(5);
rep(i,5){
  std::cin >> v[i];
  if(v[i]%10>0){
    y=10-v[i]%10;
    if(i==0)x=y;
    else if(x<y)x=y;
    v[i]+=y;
  }
  z+=v[i];
}
std::cout << z-x << '\n';
return 0;
}
