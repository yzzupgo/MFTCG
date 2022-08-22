#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define mod 1000000007;
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
if(n<100)
cout<<9;
else if(n<1000)
cout<<10+(n-100);
else if(n<10000)
cout<<909;
else if(n<100000)
cout<<910+n-10000;
else
cout<<90909;
return 0;
}
