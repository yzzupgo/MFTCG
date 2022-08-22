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
if((4*x-y)>=0 && (4*x-y)%2==0) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
