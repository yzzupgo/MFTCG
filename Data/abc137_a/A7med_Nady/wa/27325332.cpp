#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int x=a+b;
int q=a-b;
int w=a*b;
if(x>q&&x>w)
cout<<x<<"\n";
else if(q>x&&q>w)
cout<<q<<"\n";
else
cout<<w<<"\n";
return 0;
}
