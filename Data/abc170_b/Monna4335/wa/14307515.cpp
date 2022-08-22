#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int x,y;
cin>>x>>y;
if(y>=2*x&&y<=4*x&&y%2==0)
cout<<"yes";
else
cout<<"no";
return 0;
}
