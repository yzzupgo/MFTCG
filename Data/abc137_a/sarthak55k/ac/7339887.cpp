#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,m;
cin>>a>>b;
cout<<max(a*b,max(a+b,a-b));
}
