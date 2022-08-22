#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef unsigned long long int lli;
int main()
{
int x, y;
cin >> x >> y;
if(y % 2 == 1)
{
cout << "No";
}
else
{
if( y <= 4*x)
{
cout << "Yes";
}
else
{
cout << "No";
}
}
}
