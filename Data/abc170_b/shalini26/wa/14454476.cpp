#include<bits/stdc++.h>
using namespace std;
int main()
{long long int a,b;
cin>>a>>b;
if(4*a<b)
cout<<"No";
else if(((4*a)-b)%2==0)
cout<<"Yes";
else
cout<<"No";
}
