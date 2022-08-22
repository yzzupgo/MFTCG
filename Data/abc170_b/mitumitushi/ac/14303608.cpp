#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define repr(i,x,n) for(int i=x; i<(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1e9
typedef long long ll;
using VI = vector<int>;
using VB = vector<bool>;
using VS = vector<string>;
using graph = vector<vector<int>>;
int main()
{
int x,y;
cin>>x>>y;
int a=x,b=0,c=0,d=x;
for (int i = 0; i < x; i++)
{
if (2*a+4*b==y||2*c+4*d==y)
{
cout<<"Yes"<<endl;
goto ai;
}
a--;
b++;
c++;
d--;
}
cout<<"No"<<endl;
ai:
return 0;
}
