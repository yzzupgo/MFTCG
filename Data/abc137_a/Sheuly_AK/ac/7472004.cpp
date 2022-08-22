#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,sum=0, sub =0, mul =0;
cin>>a>>b;
sum =a+b;
sub = a-b;
mul = a*b;
if(sum>=sub && sum >=mul ) cout<<sum<<endl;
else if(sub>=sum && sub >=mul ) cout<<sub<<endl;
else
cout<<mul<<endl;
return 0;
}
