#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int d=a+b;
int e=a-b;
int f=a*b;
if(d>=e&&d>=f)
cout<<d;
else if(e>=d&&e>=f)
cout<<e;
else if(f>=d&&f>=e)
cout<<f;
}
