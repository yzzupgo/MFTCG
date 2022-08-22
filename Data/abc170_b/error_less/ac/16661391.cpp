# include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
int main(){
int x,y;cin>>x>>y;
if(4*x<y || (y&1)==1 || y<2*x)
cout<<"No";
else
cout<<"Yes";
return 0;
}
