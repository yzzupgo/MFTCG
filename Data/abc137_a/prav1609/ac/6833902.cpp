#include <bits/stdc++.h>
using namespace std;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) c.begin(),c.end()
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define present(container,element) (container.find(element) != container.end())
#define vpresent(container,element) (find(all(container),element) != container.end())
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int a,b;cin>>a>>b;
int d=0,s=0,m=1;
d=a+b;s=a-b;m=a*b;
if(d>=s && d>=m)
cout<<d;
else if(s>=d && s>=m)
cout<<s;
else
cout<<m;
return 0;
}
