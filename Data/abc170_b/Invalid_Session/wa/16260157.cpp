#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(v) ((int)v.size())
#define lgt(s) ((int)s.length())
#define int long long
using namespace std;
class Solver{
public:
void test(){
{
this->solve();
}
}
void solve(){
int x,y;
cin>>x>>y;
int k = (4*x-y);
if( ( (k)%2 == 0 and (k)/2 >= 0 and (x-k) >= 0)){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
};
int32_t main(){
IOS;
Solver S;
S.test();
return 0;
}
