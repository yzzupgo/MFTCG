#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
long long cranes=(4*x -y)/2;
long long turtle=(y-2*x)/2;
if(cranes>=0 && turtle>=0){
if(cranes * 2 + turtle *4 == y)cout<<"Yes\n";
else cout<<"No\n";
}
else cout<<"No\n";
return 0;
}
