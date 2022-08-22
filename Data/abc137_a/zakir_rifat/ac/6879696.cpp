#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B;
cin>>A>>B;
int ans=A+B;
int ans1=A-B;
int ans2=A*B;
if(ans>=ans1&&ans>=ans2)
{
cout<<ans<<endl;
}
else if(ans1>=ans&&ans1>=ans2)
{
cout<<ans1<<endl;
}
else
{
cout<<ans2<<endl;
}
return 0;
}
