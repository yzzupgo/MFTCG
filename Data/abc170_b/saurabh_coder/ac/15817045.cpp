#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(x==1 &&(y==2||y==4)) cout<<"Yes\n";
else if(x>1 && y%2==0 && y>=2*x && y<=4*x) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
