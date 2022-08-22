#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
vector<int> v;
v.push_back(10-a%10);
v.push_back(10-b%10);
v.push_back(10-c%10);
v.push_back(10-d%10);
v.push_back(10-e%10);
sort(v.begin(),v.end());
int sum=a+b+c+d+e;
int x=0;
for(int i=0;i<v.size()-1;i++)
{
    x=x+v[i];
}
cout<<sum+x;

}