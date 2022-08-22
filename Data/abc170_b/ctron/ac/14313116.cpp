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
double a = (4*(double)X-(double)Y)/2;
double b = ((double)Y-2*(double)X)/2;
if(a >= 0 && b>=0 && ceil(a)==floor(a) && ceil(b)==floor(b)){
cout<<"Yes"<<endl;
}else{
cout<<"No" << endl;
}
return 0;
}
