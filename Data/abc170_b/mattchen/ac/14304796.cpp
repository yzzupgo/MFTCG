#include<bits/stdc++.h>
using namespace std;
int main()
{
int head,leg,frog,crane;
cin>>head>>leg;
if(!(head*4>=leg&&(head*4-leg)%2==0))
{
cout<<"No"<<endl;
return 0;
}
else
{
crane=(head*4-leg)/2;
frog=head-crane;
if(crane*2+frog*4==leg&&crane+frog==head&&frog>=0&&crane>=0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
