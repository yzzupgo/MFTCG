#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
vector<int> v;
if(a%10!=0)
{
v.push_back(10-a%10);
}
else if(a%10==0)
{
    v.push_back(0);
}
if(b%10!=0)
{
v.push_back(10-b%10);
}
else if(b%10==0)
{
    v.push_back(0);
}
if(c%10!=0)
{
v.push_back(10-c%10);
}
else if(c%10==0)
{
    v.push_back(0);
}
if(d%10!=0)
{
v.push_back(10-d%10);
}
else if(d%10==0)
{
    v.push_back(0);
}
if(e%10!=0)
{
v.push_back(10-e%10);
}
else if(e%10==0)
{
    v.push_back(0);
}

sort(v.begin(),v.end());
int sum=a+b+c+d+e;
int x=0;
for(int i=0;i<v.size()-1;i++)
{
    x=x+v[i];
}
cout<<sum+x;

}