#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B;
cin>>A>>B;
if(A<=5)
{
cout<<0<<endl;
}
else if(A>=6&&A<=12)
{
cout<<B/2<<endl;
}
else if(A>=13)
{
cout<<B<<endl;
}
}
