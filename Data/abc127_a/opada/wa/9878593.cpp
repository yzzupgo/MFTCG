#include <bits/stdc++.h>
#define intt long long
#define pb push_back
#define mk make_pair
#define ii pair<intt,intt>
#define sc second
#define fr first
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(x>=12)
cout<<y<<endl;
else if(x>=6)
cout<<y/2<<endl;
else
cout<<0<<endl;
return 0;
}
