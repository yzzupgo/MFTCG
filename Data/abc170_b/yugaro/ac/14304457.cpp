#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define all(v) v.begin(), v.end()
#define mp make_pair
#define INF 1e9
void init()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout << fixed << setprecision(20);
}
int main()
{
init();
int x,y;
cin>>x>>y;
if((4*x-y)%2==0&&(4*x-y)>=0&&(y-2*x)>=0){
cout<<"Yes"<<endl;
}else{
cout << "No" << endl;
}
}
