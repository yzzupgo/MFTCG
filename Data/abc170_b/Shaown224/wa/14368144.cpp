#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
if(y % 2!= 0)
{
cout <<"No";
}
else
{
if(y > x*4 && x*2 < y)
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
