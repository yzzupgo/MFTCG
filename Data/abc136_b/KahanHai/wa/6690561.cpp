#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define endl "\n"
#define pb push_back
#define mp make_pair
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,x,y,an=0;
cin>>n;
x=log10(n);
if(x%2==1)
{
y=pow(10,x);
an+=n%y;
an++;
}
while(x>0)
{
if(x%2==1)
{
y=pow(10,x);
y/=10;
y*=9;
an+=y;
}
x--;
}
cout<<an;
return 0;
}
