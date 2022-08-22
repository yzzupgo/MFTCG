#include<bits/stdc++.h>
using namespace std;
int main()
{
int head,leg;
cin>>head>>leg;
if(head*4>=leg&&(head*4-leg)%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
