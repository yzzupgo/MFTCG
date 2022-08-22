#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll a,b,x,y;
cin>>a>>b;
y = (4*a - b)/2;
x = a - y;
if(x >= 0 && y >= 0 && (4*x + 2*y) == b)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
