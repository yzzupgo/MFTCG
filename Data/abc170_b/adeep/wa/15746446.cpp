#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
float a;
cin>>x>>y;
a=(4*x-y)/2;
if(a>=0 && y%2==0 && y>x)
{
cout<<"Yes";
}
else cout<<"No";
return 0;
}
