#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int xx=x*y;
int yy=x-y;
int aa=x+y;
aa=max(aa,max(xx,yy));
cout<<aa<<endl;
}
