#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int x,y;
cin>>x>>y;
if(y%2==1)
{
cout<<"No"<<"\n";
return 0;
}
int crane = abs(y-4*x)/2;
int turtle = abs(x-crane);
if(2*crane+4*turtle==y)
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";
}
