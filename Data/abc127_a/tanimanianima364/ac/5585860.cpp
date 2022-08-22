#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<cstdio>
#include<cmath>
#define repp(i,a,b) for(int i=(int)a;i<(int)b;++i)
#define repm(i,a,b) for(int i=(int)a;i>(int)b;--i)
using ll=long long;
static const ll mod=1e9;
static const ll INF=1LL<<50;
using namespace std;
int main() {
int a,b;
cin>>a>>b;
if(a<=5)b=0;
else if(a>=6&&a<=12)b/=2;
cout<<b<<endl;
return 0;
}
