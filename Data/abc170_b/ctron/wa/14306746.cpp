#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; i++)
#define REPR(i,n) for(int i = n; i >= 0; i--)
#define FOR(i,m,n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
ll X,Y;
cin >> X >> Y;
if((4*X-Y)/2>=0 && (Y-2*X)/2>=0){
cout<<"Yes"<<endl;
}else{
cout<<"No" << endl;
}
return 0;
}
