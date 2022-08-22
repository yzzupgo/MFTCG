#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<iterator>
#include<list>
#include<utility>
#include<cstdlib>
#include<queue>
#include<stack>
#include<bitset>
#define PI 2*acos(0.0)
#define pb push_back
using namespace std;
using ll = long long;
using lli = long long int;
using ld = long double;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0), cout.tie(0);
ll x,y;
cin>>x>>y;
if(y%2==0 && 2*x<=y && 4*x>=y)
{
cout<<"Yes"<<"\n";
}
else
{
cout<<"No"<<endl;
}
return 0;
}
