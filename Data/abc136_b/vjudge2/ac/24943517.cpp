#include <bits/stdc++.h>
using namespace std;
#define read freopen("in.txt", "r", stdin);
#define write freopen("out.txt","w",stdout);
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define MP make_pair
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define endl "\n"
void solve(){
int n, cnt = 0;
cin>>n ;
for(int i=1;i<=n; i++){
int dc = 0;
int x = i;
while(x){
x/=10;
dc++;
}
if(dc%2 != 0) cnt++;
}
cout<<cnt<<endl;
}
int main()
{
fast
solve();
return 0;
}
