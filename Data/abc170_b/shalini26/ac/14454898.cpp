#include<bits/stdc++.h>
using namespace std;
int main()
{long long int a,b;
cin>>a>>b;
if(((4*a)-b>=0)&&(((4*a)-b)%2==0))
{if(((4*a)-b)/2<=a)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
}
