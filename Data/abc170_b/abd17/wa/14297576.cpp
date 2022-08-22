#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
main(){
int x,y;
cin>>x>>y;
if(y&1) cout<<"No";
else{
if(y>=(2*x) || y<=(4*x)) cout<<"Yes";
else cout<<"No";
}
}
