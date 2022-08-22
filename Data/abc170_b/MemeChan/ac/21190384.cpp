#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
int main(){
int x,y;
cin >>x >>y;
bool ans=true;
if(y-2*x<0||(y-2*x)%2!=0)ans=false;
if(4*x-y<0||(4*x-y)%2!=0)ans=false;
puts(ans?"Yes":"No");
}
