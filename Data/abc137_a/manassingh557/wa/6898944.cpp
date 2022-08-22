#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int sum=a+b;
int diff=a-b;
int mul=a*b;
if(sum>diff && sum>mul)
cout<<sum<<endl;
else if(diff>sum && diff>mul)
cout<<diff<<endl;
else
cout<<mul<<endl;
}
