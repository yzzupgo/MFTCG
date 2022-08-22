#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >>x>>y;
if(y%2==0)
{
if(y>=2*x && y<=4*x) cout<< "YES";
else cout<< "NO";
}
else cout<<"NO";
return 0;
}
