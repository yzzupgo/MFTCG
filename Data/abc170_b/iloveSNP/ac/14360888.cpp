#include<bits/stdc++.h>
using namespace std;
typedef long long int LLI;
void solve()
{
int x,y;
cin>>x>>y;
bool found=false;
for(int turtles=0;turtles<=x;++turtles){
int cranes=x-turtles;
int legs=turtles*4+cranes*2;
if(legs==y){
found=true;
}
}
if(found) cout<<"Yes";
else cout<<"No";
return;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
return 0;
}
