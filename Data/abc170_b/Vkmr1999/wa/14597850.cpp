#include <bits/stdc++.h>
#define VI vector<int>
#define SI set<int>
#define QI queue<int>
#define PII pair<int, int>
#define MP make_pair
#define PB push_back
#define REP(i,a,b) for(int i = a; i < b; ++i)
#define F for(int i = 0; i < n; ++i)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
#define M 1000000007
using namespace std;
int main()
{
FIO
int x,y; cin>>x>>y;
if((6*x - y) % 2 == 0 and (y - 2*x) % 2 == 0)
cout<<"Yes";
else
cout<<"No";
return 0;
}
