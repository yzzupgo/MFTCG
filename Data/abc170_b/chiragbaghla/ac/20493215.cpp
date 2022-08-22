#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int x,y;
cin>>x>>y;
int a = y-2*x;
if(a%2 == 0 && a/2 >= 0 && a/2 <=x)
cout<<"Yes";
else
cout<<"No";
return 0;
}
