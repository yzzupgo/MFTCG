#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int x,y;
cin>>x>>y;
if(x*2 == y || x*4==y || (x*2+2) ==y || (x*4+4) == y || (x*2+4)==y || (x*4+2)==y) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
