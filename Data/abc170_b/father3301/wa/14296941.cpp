#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vpii vector< pair<int,int> >
#define mii map<int,int>
#define MOD 1000000007
using namespace std;
typedef long long ll;
int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int x,y;
cin>>x>>y;
if(4*x-y>=0 && (4*x-y)%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
