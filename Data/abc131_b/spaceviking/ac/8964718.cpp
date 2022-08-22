#include <bits/stdc++.h>
using namespace std;
int main()
{ int N,L;
cin>>N>>L;
int t=L*N+N*(N+1)/2-N;
if((L<=0 && L+N-1>=0) || (L>=0 && L+N-1<=0))
{
cout<<t;
}
else if(L>=0)
{
cout<<t-L;
}
else
{
cout<<t-L-N+1;
}
return 0;
}
