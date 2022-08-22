#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y,c;
cin>>x>>y;
if(x*2>y || x*4<y)
cout<<"No"<<endl;
c=y-x*2;
if(c/2<=x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
