#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
#define exp pow(10,-9)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define time ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lowercase(str) transform(str.begin(), str.end(), str.begin(), ::tolower);
#define uppercase(str) transform(str.begin(), str.end(), str.begin(), ::toupper);
main()
{
int x,y;
cin>>x>>y;
if(y%2 == 1){
cout<<"No\n";
}
else
{
if(x > ceil(y/4) && x <= y/2)
{
cout<<"Yes\n";
}
else
{
cout<<"No\n";
}
}
}
