#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
long long a=(4*x -y)/2;
long long b=(y-2*x)/2;
if(a>=0 && b>=0)cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
