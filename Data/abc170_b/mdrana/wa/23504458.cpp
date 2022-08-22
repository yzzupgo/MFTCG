#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int n,m;cin>>n>>m;
if(m>n*4 || m&1 || n*4<m)cout<<"No\n";
else cout<<"Yes\n";
return 0;
}
