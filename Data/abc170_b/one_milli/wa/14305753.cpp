#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
#define dunk(a) cout << (a) << endl
using namespace std;
typedef long long ll;
int main(){
double x,y,z;
cin>>x>>y;
z=2*x-y/2;
bool a=true;
bool b=true;
bool c=true;
if(z<0) a=false;
if((int)y%2!=0) b=false;
if(4*x<y) c=false;
if(a&&b&&c) puts("Yes");
else puts("No");
}
