#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(),x.end()
#define vi vector<int>
#define vll vector<ll>
#define print(x) for(auto it=x.begin();it!=x.end();it++) cout<<*it<<' '; cout<<'\n';
#define debug(a,b,c) cout << a << " " << b << " " << c << endl;
#define in(x,n) for(int e=0;e<n;e++){int y;cin>>y;x.pb(y);}
#define inl(x,n) for(int e=0;e<n;e++){ll y;cin>>y;x.pb(y);}
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x1,x2;
cin >> x1 >> x2;
if((4*x1-x2)%2==0 and (4*x1-x2>=0)) cout << "Yes" << endl;
else cout << "No" << endl;
}
