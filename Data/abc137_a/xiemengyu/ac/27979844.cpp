#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
cin>>a>>b;
cout<<max(a*b,max(a+b,a-b))<<endl;
}
