#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if(y%2 == 0)
{
if (y%x == 2 || y%x == 4 || (y%x == 0 && y/x <= 4))
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";
}
else
cout<<"NO"<<"\n";
}
