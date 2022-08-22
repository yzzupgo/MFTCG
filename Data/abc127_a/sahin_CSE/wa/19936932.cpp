#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(a>12) cout<<a<<endl;
else if(a>=2&&a<=12) cout<<a/2<<endl;
else if(a<=5) cout<<"0"<<endl;
return 0;
}
