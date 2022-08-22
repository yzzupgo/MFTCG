#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int xx=x*y;
int yy=x-y;
int aa=x+y;
aa=min(aa,min(xx,yy));
cout<<aa<<endl;
}
