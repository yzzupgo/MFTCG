#include <bits/stdc++.h>
using namespace std;
int main()
{
int a;
cin>>a;
if(a<=9)
{
cout<<a<<endl;
}
else if(a<=99)
{
cout<<9<<endl;
}
else if(a<999)
{
cout<<a-90<<endl;
}
else if(a<9999)
{
cout<<909<<endl;
}
else if(a<99999)
{
cout<<a-9091<<endl;
}
else if(a=100000)
{
cout<<90909<<endl;
}
}
