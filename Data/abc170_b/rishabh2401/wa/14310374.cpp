#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int x,y,z,z1;
cin>>x>>y;
z=4*x;
z1=2*x;
if(y==2*x)
cout<<"No";
else if(y==4*x)
cout<<"No";
else if(y>=z1&&y<=z)
cout<<"Yes";
else
cout<<"No";
return 0;
}
