#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
if(y % 2!= 0)
{
cout <<"Yes";
}
else
{
if(y > x*4)
{
cout << "No";
}
else
{
cout << "Yes";
}
}
return 0;
}
