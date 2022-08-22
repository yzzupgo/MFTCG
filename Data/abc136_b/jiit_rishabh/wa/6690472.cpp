#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define debug1(a) cout<<a<<endl;
#define debug2(a,b) cout<<a<<' '<<b<<endl;
#define debug3(a,b,c) cout<<a<' '<<b<<' '<<c<<endl;
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,a,b) for(int i=a;i<b;i++)
#define repre(i,a,b) for(int i=a;i<=b;i++)
#define clr1(arr) memset(arr,-1,sizeof(arr));
#define clr0(arr) memset(arr,0,sizeof(arr));
#define pi pair<int,int>
#define pii pair<int,pi>
#define sortV(v) v.begin(),v.end()
#define pq priority_queue
#define mpq priority_queue<int,vector<int>,greater<int> >
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> orderedSet;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> orderedMSet;
int32_t main()
{
fastio
int n;
cin>>n;
if(n<100)
{
cout<<9<<endl;
exit(0);
}
else if(n>=1000 && n<10000)
{
cout<<9+900;
}
else if(n>=100 && n<1000)
{
cout<<9+n-100+1<<endl;
exit(0);
}
else if(n>=10000 && n<100000)
{
cout<<9+900+n-10000+1<<endl;
}
else
{
cout<<90909<<endl;
exit(0);
}
return 0;
}
