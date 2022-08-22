#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
int main()
{
fast;
ll a,b;
cin>>a>>b;
ll mn=a*2;
ll mx=a*4;
if(b%2==0)
{
if(mn<=b<=mx)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
else
cout<<"No"<<endl;
}
