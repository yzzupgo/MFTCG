#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
typedef long long int ll;
#define f first
#define s second
int main()
{
int x,y;
cin>>x>>y;
if(y%2)
{cout<<"No";return 0;}
y=y/2;
if(y-x>=0)
{cout<<"Yes";}
else
cout<<"No";
return 0;
}
