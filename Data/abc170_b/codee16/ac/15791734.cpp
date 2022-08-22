#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll mod=(int)1e9+7;
int main()
{
ios;
int x,y;
cin>>x>>y;
if(y%2==0 && y>=2*x && y<=4*x) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
