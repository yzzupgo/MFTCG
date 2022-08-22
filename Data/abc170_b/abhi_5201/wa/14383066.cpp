#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve();
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
while(t--){
solve();
cout << endl;
}
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
return 0;
}
void solve(){
int x,y;
cin>>x>>y;
if(y<=4*x && y>=2*x){
cout<<"Yes";
}
else{
cout<<"No";
}
}
